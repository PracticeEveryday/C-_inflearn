#include<bits/stdc++.h>
using namespace std;

/**
 * 길이가 N으로 같은 문자열 X Y가 있을 때
 * 두 문자열 X, Y의 차이는 X[i] != Y[i]인 i의 개수이다.
 * 
 * jimin minji -> 4
 * 
 * A, B 길이는 다른데 길이가 같아질 때까지 연산을 한다.
 * 1. A의 앞에 아무 알파벳이나 추가한다.
 * 2. A의 뒤에 아무 알파벳이나 추가한다.
 * 
 * A B의 길이가 같으면서 A, B의 차이를 최소화 하는 프로그램
*/

string a, b;
int min_val = 54;
int main() {
  cin >> a >> b;

  for(int i = 0; i < b.size() - a.size() + 1; i++) {
    int cnt = 0;

    for(int j = 0; j < a.size(); j++) {
      if(a[j] != b[i + j]) cnt++;
    }
    min_val = min(min_val, cnt);
  }
  
  cout << min_val << "\n";
  return 0;
}