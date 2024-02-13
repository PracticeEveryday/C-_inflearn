#include<bits/stdc++.h>
using namespace std;
/**
 * ROT13은 카이사르 암호의 일종으로 알파벳을 13글자씩 밀어 만든다.
 * 하지만 알파벳이 아니면 그 자리에 있어야 한다.
*/

string input;
string ret;

int main() {
  getline(cin, input);
  for(int i= 0; i < input.size(); i++) {
    char c = input[i];
    // 대문자라면
    if(c >= 65 && c <= 90) {
      int sum = c + 13;
      if(sum > 90) sum -= 26;

      ret += sum;
      // 소문자라면
    } else if(c >= 97 && c <= 122) {
      int sum = c + 13;
      if(sum > 122) sum -= 26;

      ret += sum;
    } else {
      ret += c;
    }
  }

  cout << ret << "\n";
}