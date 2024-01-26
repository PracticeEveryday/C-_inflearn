#include <bits/stdc++.h>
using namespace std;

int n, a[1004], cnt;

// 시작 복잡도는 해당 로직이 몇 번 반복되었는 지 표현하기 위한 방법론이다.
// 어떤 로직이 몇 번 일어났는 지 식으로 만들어 빅오로 표현한다.
int go(int l, int r) {
  cnt++;
  if(l == r) return a[l];
  int mid = (l + r) / 2;
  // go라는 함수가 몇 번 호출 되었는 지가 시간 복잡도를 결정짓는 핵심이다.
  int sum = go(l, mid) + go(mid + 1, r);

  return sum;
}

int main (){
  cin >> n;
  for(int i = 1; i <=n; i++) {
    a[i - 1] = i;
  }

  int sum = go(0, n- 1);
  cout << sum << '\n';
  cout << "cnt: " << cnt << '\n';
}

/**
 * 실제로는 점화식을 만들고 시간 복잡도를 계산해야 한다.
 * 하지만, 코테를 치면서 점화식을 만드는 것은 힘들다.
 * 
 * 사실! 모든 시간 복잡도는 점화식을 만들 수 있다.
*/