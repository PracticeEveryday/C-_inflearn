#include<bits/stdc++.h>
using namespace std;

map<string, int> mp;
int main(){
  if(mp["hello"] == 0) {
    mp["hello"] = 12;
  }

  for(auto it: mp) {
    cout << (it).first << " : "<< (it).second << "\n";
  }
  
  // mp['wow'] 에 0도 들어가기 싫다면 아래와 같이 하면 된다.
  if(mp.find("wow") == mp.end()) {
    mp["wow"] = 123;
  }

  for(auto it = mp.begin(); it != mp.end(); it++) {
    cout << (*it).first << " : "<< (*it).second << "\n";
  }
}