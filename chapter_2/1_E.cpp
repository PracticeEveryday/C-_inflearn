#include<bits/stdc++.h>
using namespace std;

/**
 * 첫글자가 같은 선수 5명 선발
 * 첫 글자가 같은 선수가 5명보다 적다면 친선 경기를 기권하려고 한다.
 * 
 * 내일 경기를 위해 뽑을 수 있는 성의 첫 글자를 모두 구해보려고 한다.
 * 
 * 없다면 PREDAJA를 출력하자
*/

int N;
string s;
vector<char> v;
map<char, int> mp;
string ret;
int main() {
  cin >> N;
  
  string bufferflush;
  getline(cin, bufferflush);

  for(int i = 0; i < N; i++) {
    getline(cin, s);
    v.push_back(s[0]);
  }

  for(int i = 0; i < v.size(); i++) {
    // 값이 없다면
    if(mp.find(v[i]) != mp.end()) {
      mp[v[i]] += 1;
    } else {
      mp[v[i]] = 1;
    }
  }

  for(auto it = mp.begin(); it != mp.end(); it++) {
    if((*it).second >= 5 ) {
      ret += (*it).first;
    }
  }
  if(ret.size() > 0) cout << ret << "\n";
  else cout << "PREDAJA" << "\n";
}