#include<bits/stdc++.h>
using namespace std;

/**
 * 주몽은 철기군을 양성하기 위한 프로젝트에 나섰다.
 * 야철 대장을 통해 철기군이 입을 갑옷을 만들게 했다.
 * 
 * 갑옷을 만드는 재료는 각각의 고유한 번호가 있다.
 * 갑옷은 두개의 재료로 만드는 데 두 재료의 고유 번호를 합쳐 갑옷이 만들어진다.
 * 
 * N개의 재료와 고유 번호 M이 주어졌을 때 몇 개의 갑옷을 만들 수 있는 지 구하자
*/

// 첫줄에 N 둘째줄에 M
// 재료의 개수 N (1 ~ 15,000) 만오천
// 갑옷을 만드는 데 필요한 수 M(1 ~ 10,000,000) 천만
int N;
int M;
int a[150004];
int ret = 0;

int main() {
  cin >> N >> M;

  for(int i = 0; i < N; i++) {
    cin >> a[i];
  }

  if(M > 200000) {
    cout << 0 << "\n";
    exit(0);
  };

  for(int i = 0; i < N; i++) {
    for(int j = i + 1; j < N; j++) {
      if(a[i] + a[j] == M) ret++;
    }
  }

  cout << ret << "\n";
}