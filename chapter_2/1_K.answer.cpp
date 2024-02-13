#include<bits/stdc++.h>
using namespace std;

string s, ret;
int cnt[200], flag;
char mid;

int main() {
  ios_base::sync_with_stdio(false);
	cin.tie(NULL);

  cin >> s;

  for(char a: s) cnt[a]++;

  for(int i = 'Z'; i >= 'A'; i--) {
    if(cnt[i]) {
      // 홀수라면
      if(cnt[i] & 1) {
        mid = char(i); 
        // flag에 1을 더해준다.
        flag++;
        // 두개로 만들어서 짝수로 만들어준다.
        cnt[i]--;
      }
      // flag가 2개 이상이라면 반복문을 멈춘다.
      if(flag == 2) break;
      for(int j = 0; j < cnt[i]; j += 2) {
        ret = char(i) + ret;
        ret += char(i);
      }
    }
  }

  // 홀수가 하나 있다? <- 중앙에다가 넣으면 된다.
  if(mid) ret.insert(ret.begin() + ret.size() / 2, mid);
  if(flag == 2) cout << "I'm Sorry Hansoo\n";
  else cout << ret << "\n";
}