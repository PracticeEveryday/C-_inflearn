#include <bits/stdc++.h>
using namespace std;


//1. cnt 디버깅 i = j~
//2. 기반으로 시간 복잡도 구하기

// 1/2(n^2 - n) -> O(n^2)
int n, cnt;
int main () {
  cin >> n;
  int a = 0;
  for(int i = 0 ; i < n ; i++) {
    // TIP: for문 안에 외부 포문의 증감이 포함되어 있다면 n^2 으로 봐도 된다.
    for(int j = 0 ; j < i; j++) { 
      a += i + j;
      cnt++;
    }
  }

  cout << a << '\n';
  cout << " cnt: " << cnt << '\n';
  return 0;
}