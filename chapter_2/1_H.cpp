#include<bits/stdc++.h>
using namespace std;

/**
 * 온도가 주어 질 때 연속적으로 며칠 동안의 온도의 합이 가장 큰지 알아보기
 * 연속적인 몇일 동안의 온도의 합이 가장 큰 지 계산해보자
*/

// N은 전체 날짜 개수
// K는 연속일 수
// int N, K, psum[100004], a[100004];
// string s;
// int main() {
//   cin >> N >> K;
//   for(int i = 1; i <= N; i++) {
//     cin >> a[i];
//     psum[i] = psum [i - 1] + a[i];
//     if (i >= K) {
//       psum[i] -= a[i - K];
//     }
//   }

//   int max = *max_element(begin(psum), end(psum));

//   cout << max << "\n";
// }


int n, k, temp, psum[100001], ret = -10000004;

int main (){
  cin >> n >> k;
  for(int i = 1; i <= n; i++) {
    cin >> temp;
    psum[i] = psum[i - 1] + temp;
  }

  for(int i = k ; i<= n; i++) {
    ret = max(ret, psum[i] - psum[i - k]);
  }

  cout << ret << "\n";

  return 0;
}

