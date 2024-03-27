#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int a, b;
vector<ll> av;

void init() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
}

int main() {
  init();
  cin >> a >> b;

  for(int i = 0; i < a; i++) {
    ll temp;
    cin >> temp;
    av.push_back(temp);
  }

  for(int i = 0 ; i < b; i++) {
    ll temp;
    cin >> temp;

    auto it = find(av.begin(), av.end(), temp);
    if(it == av.end()) {
      // 없으면 추가
      av.push_back(temp);
    } else {
      // 있으면 삭제
      av.erase(it);
    }
  }

  // for(auto i: av) cout << i << " ";
  // cout << "\n";

  cout << av.size() << "\n";

  return 0;
}

/*
3 5 
1 2 4
2 3 4 5 6

4(대칭 차집합의 원소 개수)
*/
