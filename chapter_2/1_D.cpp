#include <bits/stdc++.h>
using namespace std;

/**
 * 펠린드롬은 앞으로 읽을 때와 거꾸로 읽을 때 같은 단어를 말한다.
 * 펠린드롬이면 1, 아니면 0을 출력하자
*/

string input;
int main() {
  cin >> input;
  string pelin = input;
  reverse(pelin.begin(), pelin.end());

  bool isPelin = true;
  for(int i = 0; i < input.size(); i++) {
    if(input[i] != pelin[i]) isPelin = false;
  }

  cout << isPelin << "\n";
}