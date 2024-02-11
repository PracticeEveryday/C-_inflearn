#include<bits/stdc++.h>
using namespace std;


// 포켓몬의 개수 N 내가 맞추어야 하는 문제의 개수 M
// 1보다 크거나 같고 10만보다 작거나 같다.


// N개의 줄에 포켓몬 번호가 1번인 포켓몬부터 N번에 해당하는 포켓몬 입력받음
// 첫글자만 대문자, 나머지는 소문자
// 일부 포켓몬은 마지막만 대문자 일수도 있다.

// 길이는 2 ~ 20

// M개의 줄에 내가 맞춰야 하는 문자를 출력해야함
// 포켓몬 이름만 주어지고 번호를 출력하기
// 숫자는 포켓몬 이름을 주기

int N, M;
vector<string> v;
string temp;
string temp2;
int main() {
  cin >> N >> M;

  for(int i = 0; i < N; i++) {
    cin >> temp;
    v.push_back(temp);  
  }

  for(int i = 0; i < M; i++) {
    cin >> temp2;
    if(atoi(temp2.c_str())) {
      // 숫자라면
      int index = stoi(temp2);
      cout << v[index - 1] << "\n";
    } else {
      auto it = find(v.begin(), v.end(), temp2);
      int index = distance(v.begin(), it);

      cout << index + 1 << "\n";
    }
  }
}