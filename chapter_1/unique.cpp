#include <bits/stdc++.h>
using namespace std;
map<int, int> mp;

int main () {
  vector<int> v{1, 1, 2, 2, 3, 3};


  // for(int i:v) {} 는 아래 코드와 같다.
  /**
   * for(int i = 0 ; i < v.size(); i++) {
   *  int a = v[i] // 이 a가 -> int i의 i이다!
   * }
  */
  for(int i: v) {
    if(mp[i]) continue;
    mp[i] = 1;
  }

  vector<int> ret;

  // auto 
  for(auto it: mp) {
    ret.push_back(it.first);
    // first에는 key 값이 들어간다.
    printf("%d", it.first);
    // second에는 value가 들어간다.
    printf("%d", it.second);
    
  }

  for(int i: ret) cout << i << " ";
}