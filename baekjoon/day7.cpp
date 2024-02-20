#include<bits/stdc++.h>
using namespace std;


/**
 * 소문자로 이루어진 N개의 단어가 있으면 조건에 따라 정렬하라
 * 1. 길이가 짧은 것 부터
 * 2. 길이가 같으면 사전순으로
 * 
 * 중복된 단어는 하나만 남기고 제거해야 한다.
*/

// 1 <= n <= 이만
int n;

string a[20004] ,r[20004];

bool compare (string a, string b) {
  if(a.size() == b.size()) return a < b;
  return a.size() < b.size();
}
int main() {
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  sort(a, a + n, compare);
  auto last = unique(a, a + n);
  n = distance(a, last);

  for(int i = 0; i < n; i++) {
    cout << a[i] <<"\n";
  }

  return 0;
}