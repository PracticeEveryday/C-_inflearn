// 시간 초과

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
/**
 * N이 주어 졌을 때 fibonacci(N)에서 0과 1이 각각 몇 번 출력되는 지 구하시오
*/

int t;
ll zc = 0;
ll oc = 0;

int fibonacci(int n) {
    if (n == 0) {
        zc = zc + 1;
        return 0;
    } else if (n == 1) {
        oc  = oc + 1;
        return 1;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}



int main() {
  cin >> t;
  for(int i = 0; i < t; i++) {
    
    // 0 <= n <=40
    int n;
    cin >> n;

    fibonacci(n);
    cout << zc << " " << oc << "\n";

    zc = 0;
    oc = 0;
    
  }
  return 0;
}

/*
3
0
1
3

1 0
0 1
1 2
*/


/*
2
6
22


5 8
10946 17711
*/