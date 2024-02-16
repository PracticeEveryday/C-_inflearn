#include<bits/stdc++.h>
using namespace std;

string input;

vector<string> split(string input, string delimiter) {
  vector<string> v;
  string token = "";
  int pos;

  while((pos = input.find(delimiter)) != string::npos){
    token = input.substr(0, pos);
    v.push_back(token);
    input.erase(0, pos + delimiter.size());
  }
  v.push_back(input);

  return v;
}

int main() {
  // 정수 3개가 주어진다. 
  // 제일 작은 수 그 다음 큰 수 제이 큰수를 차례로 입력한다.
  getline(cin, input);

  vector<string> v = split(input, " ");
  
  sort(v.begin(), v.end());
  for(auto i: v) cout << i << " ";
}