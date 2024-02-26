#include<bits/stdc++.h>
using namespace std;

int a[10];
int b[10][10];

int c[10];
int d[10][10];

int main () {
  fill(&a[0], &a[10], 100);

  for(int i: a) cout << i << " ";
  cout <<"\n";

  // ⛔️맨 마지막은 포함하지 않고 fill 하므로 b[9][10] 까지다!
  fill(&b[0][0], &b[9][10], 2);
  for(int i = 0; i < 10; i++) {
    for(int j = 0; j < 10; j++) {
      cout << b[i][j] << " ";
    }
    cout << "\n";
  }

  // 배열의 이름을 기반으로 초기화하기
  fill(c, c + 10, 100);
  for(int i: c) cout << i << " ";
  cout << "\n";

  fill(&d[0][0], &d[0][0] + 10 * 10, 2);

  for(int i = 0; i < 10; i++) {
    for(int j = 0; j < 10; j++) {
      cout << d[i][j] << " ";    
    }
    cout << "\n";
  }

  return 0;
}