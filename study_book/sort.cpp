#include<bits/stdc++.h>
using namespace std;

vector<int> a;
int b[5];

bool cmp(pair<int, int> a, pair<int, int> b) {
  return a.first > b.first;
}

int main () {
  for(int i = 5; i >=1; i--) b[i - 1] = i;
  for(int i = 5; i >=1; i--) a.push_back(i);


  // ASC
  sort(b, b+5);
  sort(a.begin(), a.end());

  for(int i: b) cout << i << " ";
  cout << "\n";

  for(int i: a) cout << i << " ";
  cout << "\n";

  sort(b, b + 5, less<int>());
  sort(a.begin(), a.end(), less<int>());

  for(int i: b) cout << i << " ";
  cout << "\n";

  for(int i: a) cout << i << " ";
  cout << "\n";

  sort(b, b + 5, greater<int>());
  sort(a.begin(), a.end(), greater<int>());

  for(int i: b) cout << i << " ";
  cout << "\n";

  for(int i: a) cout << i << " ";
  cout << "\n";

  // pair로 만들어진 vector의 경우 따로 설정하지 않으면 first, second 순으로 차례 차례 오름차순 정렬됩니다.
  vector<pair<int, int>> pv;
  for(int i = 10; i >= 1; i--) {
    pv.push_back({i, 10 - i});
  }
  sort(pv.begin(), pv.end());

  for(auto it: pv) cout << it.first << " : " << it.second << "\n";

  sort(pv.begin(), pv.end(), cmp);
  for(auto it: pv) cout << it.first << " : " << it.second << "\n";

  return 0;
}