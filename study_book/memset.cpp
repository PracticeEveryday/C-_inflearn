/**
 * memset은 바이트 단위로 초기화하여 0, -1, char 형의 하나의 문자로 초기화 할떄 사용합니다.
 * void * memset(void*ptr, int value, size_t num);
 * memset(배열의 이름, k, 배열의 크기)
*/


#include<bits/stdc++.h>
using namespace std;

int main () {
  const int max_n = 1004;
  int a[max_n];
  int a2[max_n][max_n];

  memset(a, -1, sizeof(a));
  memset(a2, 0, sizeof(a2));

  for(int i: a) cout << i << " ";

  for(int i = 0; i < max_n; i++) {
    for(int j = 0; j < max_n; j++) {
      cout << a2[i][j] << " ";
    }
  }
  return 0;
}