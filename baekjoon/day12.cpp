#include<bits/stdc++.h>
using namespace std;

/**
 * 평행 사변형은 평행한 두 변을 가진 사각형이다.
 * 세 개의 서로 다른 점이 주어진다.
 * A, B, C 적절히 D의 지점을 찾아 평행 사변형으로 만든다.
 * D가 여러개 나올 수 있는데 가장 큰 길이와 가장 작은 둘레 길이의 차이를 출력하는 프로그램
*/


struct Point {double x, y;};
// Point a = {0, 0}, b = {0, 1}, c = {1, 0};
Point a, b, c;

double ab, ac, bc, len1, len2, len3;

double 기울기_구하기(Point a, Point b) {
  return abs(a.y - b.y) / abs(a.x - b.x);
}

double 피타고라스_정리(Point a, Point b) {
  double x = a.x - b.x;
  double y = a.y - b.y;

  return sqrt(x * x + y * y);
}

int main() {
  cin >> a.x >> a.y >> b.x >> b.y >> c.x >> c.y;

  // 3점의 기울기가 0이면 평행 사변형을 만들 수 없다.
  if(기울기_구하기(a, b) == 기울기_구하기(b, c)) {
    cout << "-1.0" << "\n";
    exit(0);
  }

  ab = 피타고라스_정리(a, b);
  bc = 피타고라스_정리(b, c);
  ac = 피타고라스_정리(a, c);

  len1 = (ab + bc) * 2;
  len3 = (ac + bc) * 2;
  len2= (ab + ac) * 2;

  printf("%.15f\n", max({len1, len2, len3}) - min({len1, len2, len3})); 
  
  return 0;
}