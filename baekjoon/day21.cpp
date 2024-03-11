#include<bits/stdc++.h>
using namespace std;


// 2 <= n <= 1000
// 0~9 사이의 숫자로 이루어진 서로 다른 문자열(문자열길이 <= 100)

// 뒤에서 k 자리만 추려 남겨 놓았을 때 전부 다르게 만들 수 있는 최소 k의 수
// int n = 4;
// string a[4] = {"000001", "111112", "222223", "333333"};
// string b[4];
int n;
string a[1004];
string b[1004];
set<string> st;
int ret = a[0].length();
int main() {
  cin >> n;
  for(int i = 0 ;i <n ; i++) {
    cin >> a[i];
  }

  // for(auto i: a) cout << i << "\n";
  for(int i = 0; i < a[0].length(); i++){
    for (int j = 0; j < n; j++) {
      string temp = a[j].substr(a[j].length() - i - 1);
      st.insert(temp);
      if(st.size() == n) {
        ret = i + 1;
        cout << ret << "\n";
        exit(0);
      } 
    }
    st = {};
  }
  cout << ret << "\n";
  
  return 0;
}

/*
3
1212345
1212356
0033445

3

4
000001
111111
222221
333331

2
*/