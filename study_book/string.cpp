#include<bits/stdc++.h>
using namespace std;

int main() {
  // 문자열을 선언하는 방법은 두 가지가 있다.
  // 1. char[] 배열로 선언하기
  char s[10];
  // string으로 선언하여 문자 모은이나 문자 배열인 문자열 선언하기
  // 해당 강의에서는 string으로 진행한다!
  string a;

  a = "나는야";
  
  cout << a[0] << "\n"; // ?
  // ?가 출력되는 이유는 한글이 3바이트를 가지기 때문이다.
  cout << a[0] << a[1] << a[2] << '\n'; // 나


  string b = "love is";
  b += " pain!";
  b.pop_back();

  cout << b << " : " << b.size() << "\n";

  cout << char(* b.begin()) << "\n";
  cout << char(* (b.end() - 1)) << '\n'; // 개수 - 1 << 인덱스 개념

  b.insert(0, "test ");
  cout << b << " : " << b.size() << "\n";

  b.insert(10, "test ");
  cout << b << " : " << b.size() << "\n";

  b.erase(0, 5);
  cout << b << " : " << b.size() << "\n";

  // ove가 포함된 첫번째 인덱스 반환
  auto it = b.find("ove");
  cout << it << "\n";
  if(it != string::npos) {
    cout << "포함되어 있다" << "\n";
  }
  // [5, 7) 두개 뽑아오기 5번쨰부터
  cout << b.substr(5, 2) << "\n";


  string t = "abc";
  // good
  t += "d";
  // bad
  t = t + "e";

  cout << t << "\n";
}