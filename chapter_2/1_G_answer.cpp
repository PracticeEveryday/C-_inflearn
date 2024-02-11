#include<bits/stdc++.h>
using namespace std;

int n;
string pattern;
string s;

int main () {
  cin >> n;
  cin >> pattern;

  int pos = pattern.find("*");
  string prefix = pattern.substr(0, pos);
  string suffix = pattern.substr(pos + 1);

  for(int i = 0; i < n; i++) {
    cin >> s;
    if(s.size() < prefix.size() + suffix.size()) {
      cout << "NE\n";
    } else {
      if(prefix == s.substr(0, prefix.size()) && suffix == s.substr(s.size() - suffix.size())) {
        cout << "DA\n";
      } else {
        cout << "NE\n";
      }
    }
  }
  return 0;
}