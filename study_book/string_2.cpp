#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<string> split(string input, string delimiter) {
  vector<string> ret; // ret은 result나 return의 약여일 확률이 높다.

  ll pos = 0;
  string token = "";

  // input에 delimiter가 있는 지 확인한다.
  // 이것이 string::npos가 아니라면 while문에 진입한다.
  while ((pos = input.find(delimiter)) != string::npos)
  {
    // pos에는 찾은 위치가 반환된다.
    // 처음부터 구분자가 있는 위치까지 잘라내 토큰화 한다.
    token = input.substr(0, pos);
    // ret에 담아준다.
    ret.push_back(token);
    // 앞에서 부터 지워준다.
    // 시작점부터 delimiter의 길이만큼 삭제해준다.
    input.erase(0, pos + delimiter.length());
  }

  ret.push_back(input);
  return ret;
}

int main () {
  string a = "It's hard to have a sore leg";

  reverse(a.begin(), a.end());
  cout << a << "\n";
  reverse(a.begin(), a.end());
  cout << a << "\n";
  reverse(a.begin() + 3, a.end());
  cout << a << "\n";


  string s = "안녕하십니까 저는 김동현입니다. C++개발 너무 재밌어요 큰돌 화이팅";
  string d = " ";

  vector<string> f = split(s, d);
  for(string b : f) cout << b << "\n";  

  return 0;
}