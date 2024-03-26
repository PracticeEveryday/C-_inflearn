#include<bits/stdc++.h>
using namespace std;

int a[14], b[14], c[14];
int n, s, r;
int main() {
  cin >> n >> s >> r;

  for(int i = 1; i <= s; i++) {
    cin >> b[i];
  
  }

  for(int i = 1; i <= r; i++) {
    cin >> c[i];
  }

  // 부서진 카약
  for(int i = 1; i <= s; i++) {
    int temp = b[i];
    a[temp] = 1;
  }

  for(int i = 1; i <= r; i++) {
    int temp = c[i];
    if(a[temp]) {
      a[temp] = 0;
      c[i] = 0;
    };
  }

  for(int i = 1; i<=r; i++) {
    if(c[i]){
      int hill = c[i] - 1;
      int hill2 = c[i] + 1;
      // cout << "hill : " << hill << "hill2 : " << hill2 << "\n";
      if(a[hill] == 1) {
        a[hill] = 0;
        continue;
      }

      if(a[hill2] == 1) {
        a[hill2] = 0;
        continue;
      }
    }
  }
  cout << accumulate(begin(a), end(a), 0) << "\n";

  return 0;
}


/*
5 2 1
2 4
3

1

5 3 3
2 3 4
1 2 3

1
*/


/*
5 2 3
2 4
1 3 5

0

9 5 2
1 3 7 8 9
5 9
4
*/

