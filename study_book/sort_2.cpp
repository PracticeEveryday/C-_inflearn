#include<bits/stdc++.h>
using namespace std;

bool compare(string a, string b) {
  if(a.size() == b.size()) return a < b;
  return a.size() < b.size();
}

int main () {
  string a[3] = {"1111", "222", "33"};

  sort(a, a+3, compare);

  for(string b: a) cout << b << " ";
  return 0;
}