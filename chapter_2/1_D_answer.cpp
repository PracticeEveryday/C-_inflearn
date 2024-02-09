#include<bits/stdc++.h>
using namespace std;

string input;
string temp;

int main() {
  cin >> input;
  temp = input;

  reverse(temp.begin(), temp.end());

  if(temp == input) cout << 1 << "\n";
  cout << 0 << "\n";

  return 0;

}