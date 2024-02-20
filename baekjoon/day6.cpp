#include<bits/stdc++.h>
using namespace std;

/**
 * https://www.acmicpc.net/problem/1018
 * MN 개의 정사각형 보드를 찾음
 * 어디는 검정, 어디는 흰색으로 칠해짐
 * 
 * 8 x 8로 잘라 체스판으로 만드려고 한다.
 * 변을 공유하는 사각형은 다른 색으로 칠해져 있어야 한다.
*/
//TODO: 다시 칠해야 하는 정 사각형의 최소 개수를 구하는 프로그램


string WB[8] = {
  "WBWBWBWB",
  "BWBWBWBW",
  "WBWBWBWB",
  "BWBWBWBW",
  "WBWBWBWB",
  "BWBWBWBW",
  "WBWBWBWB",
  "BWBWBWBW"  
};
string BW[8] = {
  "BWBWBWBW",
  "WBWBWBWB",
  "BWBWBWBW",
  "WBWBWBWB",
  "BWBWBWBW",
  "WBWBWBWB",
  "BWBWBWBW",
  "WBWBWBWB"
};

// 8 <= n, m <= 50
int n, m;

int min_val = INT_MAX;

string board[51];
// string board[52] = {
//   "BWBWBWBW",
//   "WBWBWBWB",
//   "BWBWBWBW",
//   "WBWWWBWB",
//   "BWBWBWBW",
//   "WBWBWBWB",
//   "BWBWBWBW",
//   "WBWBWBWB"
// };

int count_deffer_WB(int x, int y) {
  int cnt = 0;
  for(int i = 0; i < 8; i++) {
    for(int j = 0; j < 8; j++) {
      if(WB[i][j] != board[x + i][y + j]) cnt++;
    }
  }

  return cnt;
}

int count_deffer_BW(int x, int y) {
  int cnt = 0;
  for(int i = 0; i < 8; i++) {
    for(int j = 0; j < 8; j++) {
      if(BW[i][j] != board[x + i][y + j]) cnt++;
    }
  }

  return cnt;
}



int main() {
  cin >> n >> m;
  for(int i = 0; i < n; i++) {
    cin >> board[i];
  }

  for(int i = 0; i + 8 <=n; i++) {
    for(int j = 0; j + 8 <= m; j++) {
      int temp = 0;
      int a = count_deffer_BW(i, j);
      int b = count_deffer_WB(i, j);
      temp = min(a, b);
      if(temp < min_val) min_val = temp;
    }
  }

  cout << min_val << "\n";
  return 0;
}