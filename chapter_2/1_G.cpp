#include<bits/stdc++.h>
using namespace std;

/**
 * 특정 패턴과 일치하는 파일 이름을 적절히 출력 못하는 버기
 * 알파벳 소문자 여러 개와 별로(*)로 이루어진 문자열
 * 
 * 패턴에 있는 별표를 알파벳 소문자로 이루어진 임의의 문자열로 변환해 파일 이름을 같게 만든다.
 * 별표는 빈 문자열로 만들 수 있다.
 * abcd, ad, anestonestd는 모두 패턴 a*d와 일치한다.
 * 
 * 패턴과 파일 이름을 받을 때 파일 이름이 패턴과 일치하는 지 구하는 프로그램
 * 일치하면 DA 
 * 일치하지 않으면 NE
*/

vector<string> split(string input, string delimeter) {
  string token = "";
  int pos = 0;
  vector<string> v;

  while ((pos = input.find(delimeter))!= string::npos)
  {
    token = input.substr(0, pos);
    input.erase(0, pos + delimeter.size());
    v.push_back(token);
  }
  v.push_back(input);

  return v;  
}

// 파일의 개수 N
int N;
string s;
string pattern;
pair<string, string> pr;
vector<string> ret;

int main() {
  cin >> N;
  cin >> pattern;

  string bufferflush;
  cout << bufferflush;
  
  vector<string> splited = split(pattern, "*");
  pr = { splited[0], splited[1] };
  for(int i = 0; i < N; i++) {
    bool flag = false;
    cin >> s;

    for(int i = 0; i < pr.first.size(); i++){
      if(s[i] != pr.first[i]) {
        flag = true;
        ret.push_back("NE");
      }
      continue;
    }
    if(flag) continue;

    for(int i = 0; i < pr.second.size(); i++) {
      if(s[s.size() - i - 1] != pr.second[pr.second.size() - i - 1]) {
        flag = true;
        ret.push_back("NE");
      }
      continue;
    }

    if(flag) continue;
    ret.push_back("DA");
  }


  for(auto i: ret) cout << i << "\n";
  return 0;
}