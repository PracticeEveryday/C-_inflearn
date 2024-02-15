#include<bits/stdc++.h>
using namespace std;

/**
 * 자연수 A를 B번 곱한 수를 알고 싶다.
 * 매우 커질수가 있으므로 C로 나눈 나머지를 구하는 프로그램을 작성하자
*/


// 모두 2,147,483,647 이하의 자연수이다.

// a를 b번 곱해라
long long a, b, c;

int go(long long a, long long b) {
  if(b == 1) return a % c;
  long long ret = go(a, b / 2);

  // 곱한 것들을 변수에 집어 넣고 활용하는 것이다!!
  ret = (ret * ret) % c;
  // 홀수 b % 2 -> 홀수라는 뜻!
  if(b % 2) ret = (ret * a) % c;
  return ret;
}

int main() {
  cin >> a >> b >> c;
  cout << go(a, b) << "\n";
}