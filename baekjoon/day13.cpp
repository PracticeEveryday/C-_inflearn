#include<bits/stdc++.h>
using namespace std;

/**
 * 한수
 * 한수는 X의 자리가 등차 수열을 이루면 한수라고 한다.
 * 등차 수열은 연속된 두 개의 수 차이가 일정한 수열이다.
 * N이 주어졌을 때 1보다 크거나 같고 N보다 작거나 같은 한수의 개수를 출력하는 프로그램
*/

// n <= 1000
// int n = 110;
int n;
int cnt;
// 1보다 크거나 같고 N보다 작거나 같은 한수의 개수를 출력하자
int main() {
  cin >> n;
  
  if(n < 100) {
    cnt = n;
  } else {
    cnt = 99;
    for(int i = 100; i <= n; i++) {
      string str = to_string(i);
      bool condition = (((double)str[2] + (double)str[0]) / 2) == (double)str[1];
      if(condition) {
        cnt++;
      }
    }
  };

  cout << cnt << "\n";
  return 0;
}

/*
110

99

1
1

210
105

1000
144

500
119
*/