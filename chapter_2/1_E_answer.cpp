#include<bits/stdc++.h>
using namespace std;

int n, cnt[26];
string s, ret;

int main () {
  cin >> n;
  for(int i = 0; i < n; i++) {
    cin >> s;
    // 배열에 문자를 집어 넣어도 배열은 인덱스, 즉 integer index로 처리된다.
    // c++에서 자동으로 integer처리 해준다!
    cnt[s[0] - 'a']++;
  }

  for(int i = 0 ; i < 26; i++) {
    // string 타입 ret에 더해주면 숫자도 문자화 해서 들어간다.
    // 0 + "a" => a
    // 1 + "a" => b
    // 2 + "a" => c
    // 숫자를 문자화 시킬 수도 있다!!
    if(cnt[i] >= 5) ret += (i + 'a');
  }

  if(ret.size()) cout << ret << "\n";
  else cout << "PREDAJA" << "\n";
}