#include<bits/stdc++.h>
using namespace std;

/**
 * 국왕 김지민은 수학 문제를 내고 상금을 걸었다.
 * 길이가 정수 N, 배열 A, B 함수 S
 * S = A[0] * B[0] + ... + A[N-1] * B[N-1]
 * 
 * S의 값을 제일 작게 만들기 위해 A의 수를 재배열하자
 * 단, B는 재배열 하면 안된다.
 * 
 * S의 최소값 출력
*/

// N <= 50, a, b 원소: 0 <= A, B <= 100
int n, a[54], b[54];
int ret = 0;

int main() {
  cin >> n;

  for(int i = 0; i < n; i++) cin >> a[i];
  for(int i = 0; i < n; i++) cin >> b[i];

  sort(a, a + n, less<int>());
  sort(b, b + n, greater<int>());

  // for(int i: a) cout << i << " ";
  // cout << "\n";

  // for(int i: b) cout << i << " ";
  // cout << "\n";

  for(int i = 0; i < n; i++) {
    if(a[i] == 0) continue;

    ret += (a[i] * b[i]);
  }

  cout << ret << "\n";
  return 0;
}


/*
5
1 1 1 6 0
2 7 8 3 1

18
*/