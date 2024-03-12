#include<bits/stdc++.h>
using namespace std;

// n <= 100
int n;
int a[104];

int k;
int main() {
  cin >> n;
  for(int i = 1; i <= n; i++) {
    // 스위치 입력
    cin >> a[i];
  }

  cin >> k;
  for(int i = 0; i < k; i++) {
    int sex, num;
    cin >> sex >> num;

    if(sex == 1) {
      for(int i = 1; i <= n; i++) {
        if(i % num == 0) {
          a[i] = a[i] ? 0 : 1;
        }
      }
    } else {
      a[num] = a[num] ? 0 : 1;
      for(int i = 1; a[num + i] == a[num - i]; i++) { // num을 기준으로 왼, 오가 같으면
        if(num + i > n || num - i < 1) break;

        a[num + i] = a[num + i] ? 0 : 1;
        a[num - i] = a[num - i] ? 0 : 1;
      }
    }
  }

  for(int i = 1 ; i <= n; i++) {
    cout << a[i] << " ";
    if(i % 20 == 0) cout << "\n";
  }
  return 0;
}


/*
8
0 1 0 1 0 0 0 1
2
1 3
2 3

1 0 0 0 1 1 0 1
*/