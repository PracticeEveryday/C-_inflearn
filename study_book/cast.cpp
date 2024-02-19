#include <bits/stdc++.h>

using namespace std;

int main() {
  double ret = 2.12345;
  int n = 2;

  // 같은 타입끼리 연산하는 것이 중요하다.
  int a = (int)round(ret / double(n));

  cout << a << "\n";


  vector<int> v = {1, 2, 3};
  int b = 10;

  cout << v.size() - b << "\n"; // 18446744073709551609
  cout << (int)v.size() - b << "\n"; // -7


  char c = 'a';
  cout << (int)c << "\n";             // 97
  cout << (int)c - 97 << "\n";        // 0
  cout << (int)'a' - 'a' << "\n";       // 0
  cout << (int)'b' - 'a' << "\n";       // 1
  cout << (int)'c' - 'a' << "\n";       // 2
  cout << (int)'d' - 'a' << "\n";       // 3
  cout << (int)'e' - 'a' << "\n";       // 4
  cout << (int)'f' - 'a' << "\n";       // 5
  cout << (int)'g' - 'a' << "\n";       // 6
  cout << (int)'h' - 'a' << "\n";       // 7
  cout << (int)'i' - 'a' << "\n";       // 8
  //...


  return 0;
}