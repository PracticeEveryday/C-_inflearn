#include<bits/stdc++.h>
using namespace std;

void outerFunction() {
  int a = 1;
  cout << "a 지역 변수 주소: " << &a << "\n";

  auto innerFunction = []() {
      cout << "함수 실행" << "\n";
  };

  int b = 1;
  cout << "b 지역 변수 주소: " << &b << "\n";

  cout << "innerFunction 익명 함수 주소 " << &innerFunction << "\n";
  innerFunction();
}

int main() {
    outerFunction();
    return 0;
}