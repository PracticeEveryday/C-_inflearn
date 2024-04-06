#include<bits/stdc++.h>
using namespace std;

map<string, int> mp;
string a[] = {"김동현", "오한결", "김호진"};

int main () {
  for(int i = 0; i < 3; i++) {
    mp.insert({a[i], i + 1});
    mp[a[i]] = i + 1;
  }

  /**
   * map에 해당 키가 없으면 0으로 초기화 됩니다 (int의 경우)
   * 만약 map에 해당 키가 없는지 확인하고 싶다면 find 메소드를 사용해야 한다.
  */

  cout << mp["kundol"] << "\n";
  cout << mp["kundol"] << "\n";
  mp.erase("kundol");

  auto it = mp.find("kundol");
  if(it == mp.end()) {
    cout << "Not Found" << "\n";
  }

  mp["kundol"] = 100;

  it = mp.find("kundol");
  if(it != mp.end()) {
    cout << (*it).first << " : " << (*it).second << "\n";
  }

  for(auto it: mp) {
    cout << (it).first << " : " << (it).second << "\n";
  }

  for(auto it = mp.begin(); it != mp.end(); it++) {
    cout << (*it).first << " : " << (*it).second << "\n";
  }

  mp.clear();

  return 0;
}