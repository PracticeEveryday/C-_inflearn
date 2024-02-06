#include<bits/stdc++.h>
using namespace std;

vector<int> v;

int main() {
  for(int i = 1; i <= 5; i++) {
    v.push_back(i);
    v.push_back(i);
  }

  for(int i: v) cout << i << " ";
  cout << "\n";

  // 중복되지 않는 요소로 채운 후, 그 다음 이터레이터를 반환한다.
  auto it = unique(v.begin(), v.end());
  cout << it - v.begin() << "\n";
  // 앞에서 부터 중복되지 않게 채운 후 나머지 요소들은 그대로 둔다.
  for(int i: v) cout << i << " ";
  cout << "\n";

  vector<int> uv = {1, 1, 2, 2, 3, 3, 5, 6, 7, 8, 9};
  auto it2 = unique(uv.begin(), uv.end());

  for(int i : uv) cout << i << " "; // 1, 2, 3, 5, 6, 7, 8, 9, 7, 8, 9
  cout << "\n";

  cout << it2 - uv.begin() << "\n";
  
  return 0;
}