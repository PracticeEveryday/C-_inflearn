#include<bits/stdc++.h>
using namespace std;


/**
 * 총 N개의 달걀
 * 잠재 고객 M명
 * i번째 고객은 Pi 가격 이하로 살 수 있다.
*/

// 한 고객에 두 개 이상의 달걀을 팔지 않는다.
// A가격에 팔면 Pi가 A모다 크거나 같은 고객은 달걀을 산다.
// 최대 수익을 올리는 가장 낮은 가격


// 1 <= n <= 1000
// 2 <= m <= 1000
// pi <= 백만
// int n, m;
// int a[1004];

int n = 4, m = 7;
int a[7] = {3, 3, 3, 3, 3, 3, 300};
vector<int> v = {0};

pair<int, int> ret;

int main() {
  // cin >> n >> m;
  // for(int i = 0; i < m; i++) {
    // cin >> a[i];
  // }

  sort(a, a + m, less<int>());
  int max_val = a[m - 1];

  for(int i = 1; i <= max_val; i++) {
    int cnt = 0;
    for(int j = 0; j < m; j++) {
      if(a[j] >= i) {
        cnt++;
      } else {
        continue;
      }
    }

    
    if(v[i - 1] < (cnt * i)) {
      v.push_back(cnt * i);
    } else {
      ret.first = i - 1;
      ret.second = v[i - 1];
      break;
    }
    
  }

  
  cout << ret.first << " " << ret.second << "\n";
  return 0;
}


/*
5 4
2
8
10
7

// 가격과 수익
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