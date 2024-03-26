#include<bits/stdc++.h>
using namespace std;

string str;
vector<string> v;
int main() {
  cin >> str;

  for (int i = 1; i < str.length() - 1; i++) {
      for (int j = i + 1; j < str.length(); j++) {
          string first = str.substr(0, i);
          string second = str.substr(i, j - i);
          string third = str.substr(j);

          reverse(first.begin(), first.end());
          reverse(second.begin(), second.end());
          reverse(third.begin(), third.end());

          v.push_back(first + second + third);
      }
  }

  sort(v.begin(), v.end());

  cout << v.front() << "\n";
  return 0;
}



