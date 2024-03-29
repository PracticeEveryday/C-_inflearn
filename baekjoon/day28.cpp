#include<bits/stdc++.h>
using namespace std;

void init() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
}

/*
  가장 많이 팔린 책을 칠판에 써놓는다.
  가장 많이 팔린 책 재목을 쓰자.

  ! 여러개 일 경우에는 오름차순 가장 빠른 것
*/

// n <= 1000
// 길이 <= 50 + 알파벳 소문자
int n;
map<string, int> mp;

bool cmp(pair<string, int>& a,pair<string, int>& b) {
	if (a.second == b.second) return a.first < b.first;
	return a.second > b.second;
}

int main() {
  init();
  cin >> n;

  for(int i = 0; i < n; i++) {
    string temp;
    cin >>temp;

    // temp가 없다면
    if(mp.find(temp) == mp.end()) {
      mp[temp] = 1;
    } else {
      mp[temp] = mp[temp] + 1;
    }
  }
  vector<pair<string, int>> vec( mp.begin(), mp.end() );
  sort(vec.begin(), vec.end(), cmp);

  // for(auto i: vec) cout << i.first << " : " << i.second << " ";
  // cout << "\n";

  cout << vec.front().first << "\n";

  return 0;
}

/*
5
top
top
top
top
kimtop

top

9
table
chair
table
table
lamp
door
lamp
table
chair

table

6
a
a
a
b
b
b

a

8
icecream
peanuts
peanuts
chocolate
candy
chocolate
icecream
apple

chocolate

1
soul

soul

*/