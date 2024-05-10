#include <bits/stdc++.h>
using namespace std;

int main () {
  int a[3] = {1, 2, 3};
  int*p = a;
  cout << p << "\n";
  cout << &a[0] << "\n";
  cout << p + 1 << "\n"; // 포인터 연산 한 칸 뒤로 이동한다.
  cout << &a[1] << "\n";

  /**
   * 0x16fabae18
   * 0x16fabae18
   * 0x16fabae1c // 4차이 int는 4바이트
   * 0x16fabae1c
  */
}