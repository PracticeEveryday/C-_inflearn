#include<bits/stdc++.h>
using namespace std;

/**
 * 마리의 위치를 계산하라
 * 
 * 좌표 (x1, y1) 좌표 (x2, y2)가 주어지고 거리 r1, r2가 주어질때 마린이 있을 수 있는 좌표의 수
*/

int t;

// -일만 <= x, y <= +일만
// 1 <= r <= 일만

int main() {
  cin >> t;

  for(int i = 0; i < t; i++) {
    double x1, y1, r1, x2, y2, r2;
    cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;

    if((x1 == x2) && (y1 == y2) && (r1 == r2)) {
      cout << -1 << "\n";
      continue;
    }

    if((x1 == x2) && (y1 == y2) && (r1 != r2)) {
      cout << 0 << "\n";
      continue;
    }

    double length = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
    
    if(abs(r1 - r2) < length < (r1 + r2)) {
      cout << 2 << "\n";
    } else if(length == (r1 + r2)) {
      cout << 1 << "\n";
    } else {
      cout << 0 << "\n";
    }
  }
  return 0;
}


/*
3
0 0 13 40 0 37
0 0 3 0 7 4
1 1 1 1 1 5

2
1
0
*/