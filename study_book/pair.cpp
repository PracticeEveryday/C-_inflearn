#include <bits/stdc++.h>
using namespace std;

pair<int, int> pi;
pair<int, int> pi2;
tuple<int, int, int> tl;
tuple<int, int, int> tl2;
int a, b, c;
int d, e, f;

int main () {
  pi = {1, 2}; // or make_pari(1, 2);
  tl = make_tuple(1, 2, 3);

  
  // a = pi.first;
  // b = pi.second;
  tie(a, b) = pi; // <- 위처럼 first, second로 명명하지 않고 한번에 풀수도 있다.
  cout << a << " : " << b << '\n';

  tie(a, b, c) = tl;
  cout << a << " : " << b << " : " << c << '\n';

  // ----------------- tie를 사용하지 않고 값을 출력하는 방법
  pi2 = make_pair(1, 2);
  tl2 = make_tuple(1, 2, 3);

  d = pi2.first;
  e = pi2.second;
  cout << d << " : " << e << "\n";


  // 미리 변수 선언이 되어 있어야 get으로 꺼내오는 것이 가능하다!
  d = get<0>(tl2);
  e = get<1>(tl2);
  f = get<2>(tl2);
  cout << d << " : " << e << " : " << f << "\n";
}