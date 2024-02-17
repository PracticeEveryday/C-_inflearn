#include<bits/stdc++.h>
using namespace std;

/**
 * 재원이와 다리를 지원보자
 * 다리를 짓기 적합한 곳을 사이트라고 한다.
 * 
 * 강 서쪽에는 N개, 오른쪽에는 M개 있다.
 * 한 사이트에는 하나의 다리만 연결될 수 있다.
 * 다리끼리는 겹칠 수 없고, 다리를 지을 수 있는 경우의 수를 구하자
*/




// long long factorial (int n) {
//   if(n == 0 || n == 1) return 1;
//   return n * factorial(n - 1);
// }

// // think: 다리끼리는 겹칠 수가 없다!
// // 조합을 팩토리얼로 계산하면 터진다.
// int main() {
//   // cin >> t;

//   for(int i = 0 ; i< t; i++) {
//     // cin >> n >> m;
//     long long val = factorial(m);
//     long long val2 = (factorial(n) * (factorial(m - n)));
//     ret = val / val2;

//     cout << ret << "\n";
//   }

//   return 0;
// }

int t;
int n, m; // 0 < n <= m < 30

int main() {
  cin >> t;

  for(int i = 0; i < t; i++) {
    cin >> n >> m;

    long long ret = 1;
    int k = 1;
    for(int j = m; j > m- n; j--) {
      ret *= j;
      ret /= k;
      k++;
    }

    cout << ret << "\n";
  }
  return 0;
}
/*
3
2 2
1 5
13 29


*/