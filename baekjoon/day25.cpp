#include<bits/stdc++.h>
using namespace std;

/**
 * 경기는 5분 안에 시작해야 한다.
 * 일부 팀은 카약을 하나 더 들고 왔다.
 * 무겁고 운반하기 어렵다.
 * 팀 4는 3, 5 팀에만 여분의 카약을 빌려 줄 수 있다.
 * 다른 팀에게 받은 카약은 다른 팀에게 빌려 줄 수 없다.
 * 
 * 카약을 가져온 팀이 카약이 부서지면 그 팀이 써야 한다.
 * 
 * 적절히 빌렷을 때 출발하지 못하는 팀은 몇 팀?
*/

// 팀의 수 n, 카약이 손상된 팀의 수 s, 카약을 하나 더 가져온 팀의 수 r
// 2 <= n <= 10, 1 <= s, r <= n

// 둘째 줄에는 카약이 손상된 팀의 번호가 주어진다. 중복 x
// 셋째 줄에는 카약의 하나 더 가져온 팀의 번호가 주어진다.

// int a[14];

// // 부서진 카약
// int b[] = {2, 4};
// // 가져온 사람
// int c[] = {3};

// int n = 5, s = 2, r = 1;

int a[14], b[14], c[14];
int n, s, r;
int main() {
  cin >> n >> s >> r;
  
  // 부서진 카약
  for(int i = 1; i <= s; i++) {
    cin >> b[i];
    a[b[i]] = 1;
  }

  
  // 여분이 있는 카약
  for(int i = 1; i <= r; i++) {
    cin >> c[i];
    if(a[c[i]] == 1) {
      // 자기거가 부서져 있으면 자기거 고치기
      a[c[i]] = 0;
    } else {
      int hill = c[i] - 1;
      int hill2 = c[i] + 1;
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

  // for(int i: a) cout << i << " ";
  // cout << " \n";

  // for(int i: b) cout << i << " ";
  // cout << " \n";

  // for(int i: c) cout << i << " ";
  // cout << " \n";
  
  cout << accumulate(begin(a), end(a), 0) << "\n";
  return 0;
}

/*
5 2 1
2 4
3

1
*/


/*
5 2 3
2 4
1 3 5

0
*/

