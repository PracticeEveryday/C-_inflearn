#include<bits/stdc++.h>
using namespace std;


// 달걀수 n, 고객수 m
int n, m, idx;
int a[1004];
int max_val;
int main() {
  cin >> n >> m;
  for(int i = 0 ; i < m; i++) {
    cin >> a[i];
  }

  sort(a, a + m, greater<int>());

  for(int i = 0; i < m; i++) {
    if(i >= n) { // 계란수 보다 많으면 못 팜 
      break;
    }

    if(a[i] * (i + 1) > max_val) {
      max_val = a[i] * (i + 1);
      idx = i;
    }
  }
  
  cout << a[idx] << " "<< max_val << "\n";
  return 0;
}

/*
5 4
2
8
10
7

7 21
*/


/*
4 7
3
3
3
3
3
3
300

300 300
*/