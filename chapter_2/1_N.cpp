#include<bits/stdc++.h>
using namespace std;

/**
 * 자연수 A를 B번 곱한 수를 알고 싶다.
 * 매우 커질수가 있으므로 C로 나눈 나머지를 구하는 프로그램을 작성하자
*/


// 모두 2,147,483,647 이하의 자연수이다.
int A;
int B;
int C;

long long result = 1;

int main() {
  cin >> A >> B >> C;
  for(int i = 0; i < B; i++) {
    result = result * (long long)A;
  }

  cout << (int)(result % C) << "\n";
}