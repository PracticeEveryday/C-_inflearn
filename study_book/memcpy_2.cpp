#include<bits/stdc++.h>
using namespace std;
int a[5], temp[5];

int main () {

  for(int i = 0; i < 5; i++) a[i] = i;
  // temp에 a 깊은 복사
  memcpy(temp, a, sizeof(a));

  for(int i: temp) cout << i << ' ';
  cout << '\n';

  // 원본 변경 후 작업
  a[4] = 1000;
  for(int i: a) cout << i << " ";
  cout <<"\n";

  // temp이 담아 놓은 원본 배열을 다시 깊은 복사
  memcpy(a, temp, sizeof(temp));
  for(int i: a) cout << i << ' ';
  cout << "\n";

  return 0;
}

/**
 * 0 1 2 3 4 
 * 0 1 2 3 100
 * 0 1 2 3 4
*/