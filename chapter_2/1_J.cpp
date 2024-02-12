#include<bits/stdc++.h>
using namespace std;

/**
 * 해빈이는 입던 오들은 다시 입지 않는다.
 * 안경, 코트, 상의, 신발을 입었다면 
 * 다음날 바지를 추가로 입거나 렌즈를 착용해야 한다.
 * 가진 의상들이 주어 질 때 알몸이 아닌 상태로 얼마나 돌아다닐 수 있을까?
*/

// 테스트 케이스 개수

// 의상 가지수 0 <= n <= 30;
// n개의 의상 이름과 종류가 공백으로 주어진다.
// 같은 종류의 의상은 하나만 입을 수 있다.

int t, n;
string s, s2;

int main() {
  cin >> t;

  for(int i = 0; i < t; i++) {
    cin >> n;
    map<string, int> mp;
    for(int i = 0; i < n; i++) {
      cin >> s >> s2;
      if(mp[s2]) mp[s2] += 1;
      else mp[s2] = 1;
    }
    int ret = 1;
    for(auto i: mp) ret *= (i.second + 1);
    ret--;
    cout << ret << "\n";
  }
}