#include<bits/stdc++.h>
using namespace std;

vector<int> v;

int main() {
  for(int i = 1; i <=10; i++) v.push_back(i);
  for(int a: v) cout << a << " ";
  cout << "\n";

  v.pop_back();
  for(int a: v) cout << a << " ";
  cout << "\n";

  v.erase(v.begin(), v.begin() + 3);
  for(int a: v) cout << a << " ";
  cout << "\n";

  // 없으면 마지막 다음 요소를 반환한다.
  auto a = find(v.begin(), v.end(), 100);
  if(a == v.end()) cout << "not found" << "\n";

  fill(v.begin(), v.end(), 10);
  for(int a: v) cout << a << " ";
  cout << "\n";

  v.clear();
  cout << "empty?" << "\n";

  for(int a : v) cout << a << " ";

  vector<int> v2(5, 100);
  for(int i: v2) cout << i << " ";
  cout << "\n";
  return 0;
}