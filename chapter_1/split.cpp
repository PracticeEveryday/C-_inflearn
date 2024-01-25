/**
 * 문자열 split이 굉장히 많이 나옴
 * 특정 문자열을 기준으로 쪼개 배열화 시키는 함수
 * C++은 split()을 지원하지 않아 구현해야함.
 *
 * aaa bbb ccc <- " "를 기반으로 문자열을 나눠 쪼개 배열을 만들고 싶다
 * 구분자로 뽑고 싶다.
 */

#include<bits/stdc++.h>
using namespace std;

vector<string> split(string input, string delimiter) {
  vector<string> ret;
  long long pos = 0;
  string token = "";
  // string::npos -> 위치나 크기를 반환하는 문자열 관련 함수를 처리할 때 위치나 크기가 없음을 나타내는 것이다.
  // find는 문자열에서 delimiter를 찾는 데 그것이 있다면 처음 만나는 값의 위치를 반환한다.
  // 즉, 문자열에서 찾으려는 구분자가 있어 그 위치가 없지 않다면 while문을 반복하는 것이다!!
  while ((pos = input.find(delimiter)) != string::npos)
  {
    token = input.substr(0, pos);
    ret.push_back(token);
    input.erase(0, pos + delimiter.length());
  }
  ret.push_back(input);
  return ret;  
}

int main () {
  string s = "안녕하세요 재밌습니다 C++은";
  string d = " ";

  vector<string> a = split(s, d);
  for(string b: a) cout << b << '\n';
}