#include<bits/stdc++.h>
using namespace std;


// 3대의 트럭을 가지고 있다.
// 트럭의 수에 따라 주차 요금 할인을 해준다.

// 한대는 한대당 1분에 A원
// 두대는 한대당 1분에 B원
// 세대는 한대당 1분에 C원

// A, B, C가 주어지고 주차장에 주차된 시간이 주어질 때 주차 요금을 얼마를 내야하는지

// 다음 세개의 줄에는 두 정수가 주어진다.


int main() {
  int start, end;
  //1. a, b, c 입력 받기
  int a, b, c;
  int time[104];
  int sum = 0;
  fill(time, time + 104, 0);
  cin >> a >> b >> c;

  for(int i = 0; i < 3; i++) {
    cin >> start >> end;
    for(int i = start; i < end; i++) {
      time[i]++;
    }
  }
  for(int i = 0; i < 104; i++) {
    if(time[i] != 0) {
      if(time[i] == 1) {
        sum += 1 * a;
      } else if(time[i] == 2) {
        sum += 2 * b;
      } else if(time[i] == 3){
        sum += 3 * c;
      }
    }
  }
  cout << sum << "\n";
}

/**
5 3 1
1 6
3 5
2 8

33
*/

/**
  10 8 6
  15 30
  25 50
  70 80

  480
*/