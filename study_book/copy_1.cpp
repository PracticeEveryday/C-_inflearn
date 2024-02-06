#include<bits/stdc++.h>
using namespace std;

#define n 3

int main () {
  vector<int> v {1, 2, 3};
  vector<int> ret(3);
  copy(v.begin(), v.end(), ret.begin()); cout << ret[1] << "\n";
  ret[1] = 100;
  cout << ret[1] << "\n";
  cout << v[1] << "\n";

  // 배열은 define으로 설정해 주어야 한다.
  int a[n] = {1, 2, 3};
  int ret_2[n];
  copy(a, a + n, ret_2);

  cout << a[1] << "\n";
  cout << ret_2[1] << "\n";

  return 0;
}