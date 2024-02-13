#include<bits/stdc++.h>
using namespace std;

/**
 * 팰린드롬을 선물해 주려고 한다.
 * 영어 이름으로 팰린드롬을 만드려고 한다.
 * 
 * 영어 이름을 팰린드롬으로 바꾸는 프로그램을 출력하자
 * 정답이 여러개일 경우 사전순으로 앞서는 것을 출력 <- 오름차순
*/

string input;
int a[26];
int odd_count = 0;
const string FAIL = "I'm Sorry Hansoo";
string ret;

pair<char, int> pr;
int main() {
  cin >> input;
  for(int i = 0; i < input.size(); i++) {
    a[input[i] - 'A']++;
  }  

  for(int i = 0; i < 26; i++) {
    if(a[i] % 2 == 1) odd_count++;
  }
  // 홀수가 2개 이상이면 FAIL 출력 후 종료
  if(odd_count > 1) {
    cout << FAIL << "\n";
    exit(0);
  } else {
    // 하나 밖에 없으면
    for(int i = 0; i < 26; i++) {
      // 홀수 찾기
      if(a[i] % 2 == 1) {
        // 홀수 개수 찾기 완료
        pr = {(char)(i + 'A'), 1};
        a[i]--;
      }
    }
  }

  for(int i = 0; i < pr.second; i++) ret += pr.first;

  string half_str;
  // 짝수 앞뒤로 값 붙여주기
  for(int i = 0; i < 26; i++) {
    if(a[i] > 0) {
      int cnt = a[i] / 2;
      for(int j = 0; j < cnt; j++) half_str += (char)(i+'A');
    }
  }
  
  string reverse_half_str = half_str;
  reverse(reverse_half_str.begin(), reverse_half_str.end());
  
  cout << half_str + ret + reverse_half_str << "\n";
}