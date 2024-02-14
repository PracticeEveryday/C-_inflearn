#include<bits/stdc++.h>
using namespace std;

/**
 * A, B로만 이루어진 단어가 나온다.
 * A끼리 아치형 곡선을 그려 같은 글자끼리 쌍을 짓기로 했다.
 * 선끼리 교차하지 않으면서 각 글자를 정확히 한 개의 다른 위치에 있는 글자와 짝 지을 수 있다면 좋은 단어이다.
*/

// 단어의 수
// A, B로만 이루어진 단어가 한 줄에 하나씩 주어진다.
// 단어의 길이는 2 ~ 10만, 모든 단어의 길이 합은 백만을 넘지 않는다.
int N;
int cnt;
string s;

int main() {
  cin >> N;
  for(int i = 0 ; i < N; i++) {
    int A_CNT = 0;
    int B_CNT = 0;
    cin >> s;
    if(s.find("ABAB") != string::npos) continue;
    if(s.find("BABA") != string::npos) continue;

    for(int i = 0; i < s.size(); i++) {
      if(s[i] == 'A') A_CNT++;
      else B_CNT++; 
    }

    if(A_CNT & 1) continue;
    if(B_CNT & 1) continue;

    cnt++;
  }

  cout << cnt << "\n";
}

/**
3
AAA
AA
AB
*/