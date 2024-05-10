#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

string a = "C++ 허니 잼";
string b = "C도 너무 재밌어";

double c = 1.23456789;
int main () {
  // cout << 출력할 것 << '\n'으로 출력하는 것이 일반적이다.
  // 위와 같이 한 줄을 바꿔도 되고 한 칸을 띄어쓰려면 아래와 같이 출력하면 된다.
  // cout << 출력할 거 << " "
  // <<에 이어 문자열이나 문자를 넣어도 된다!
  cout << a << "\n";
  cout << a << " " << "" << b << '\n';

  // cout에 실수를 출력하면 일부분만 출력된다.
  // 실수 타입을 출력하고 싶으면 어떻게 하면 될까?

  cout << c << "\n";
  // 소수 6자리까지 반올림해서 출력해야 된다고 가정해보자
  // 그럼 cout.precision(표현하고 싶은 자리수 + 1)로 설정 해주면 된다.
  cout.precision(7);
  cout << c << "\n";
  return 0;
}


