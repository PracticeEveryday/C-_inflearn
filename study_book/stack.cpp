#include<bits/stdc++.h>
using namespace std;

stack<string> stk;

int main () {
  stk.push("김");
  stk.push("동");
  stk.push("현");
  stk.push("파");
  stk.push("이");
  stk.push("팅");

  while (stk.size())
  {
    cout << stk.top() << "\n";
    stk.pop();
  }
}