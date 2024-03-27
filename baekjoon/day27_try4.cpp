#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
// map으로 성공!!
int a, b;
map<ll ,ll> mp;

void init() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
}

int main() {
  init();

  cin >> a >> b;

  for (int i = 0; i < a; i++) {
    ll temp;
    cin >> temp;
    mp[temp] = temp;
  }

  for(int i = 0; i < b; i++) {
    ll temp;
    cin >> temp;

    auto val = mp[temp];
    if(val) {
      mp.erase(temp);
    } else {
      mp[temp] = temp;
    }
  }

  cout << mp.size() << "\n";

}


/*
3 5 
1 2 4
2 3 4 5 6

4(대칭 차집합의 원소 개수)
*/