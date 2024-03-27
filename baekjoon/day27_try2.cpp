#include<bits/stdc++.h>
using namespace std;

typedef long long ll;


int a, b;
vector<ll> av, bv;
int main() {
  cin >> a >> b;


  for(int i = 0; i < a; i++) {
    ll temp;
    cin >> temp;
    av.push_back(temp);
  }

  for(int i = 0; i < b; i++) {
    ll temp;
    cin >> temp;
    bv.push_back(temp);
  }

  vector<ll> iv;
  for(int i = 0; i < av.size(); i++) {
    // 이게 이중 포문임!! 그래서 안되는 거였음.
    if(find(bv.begin(), bv.end(), av[i]) != bv.end()) {
      iv.push_back(av[i]);
    }
  }

  // for(auto i: iv) cout << i << " ";
  // cout << "\n";

  cout << (av.size() - iv.size()) + (bv.size() - iv.size()) << "\n";

  return 0;
}

/*
3 5 
1 2 4
2 3 4 5 6

4(대칭 차집합의 원소 개수)
*/