#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


ll a, b, c;
int ret;

int go(ll a, ll b) {
  if(b == 0) return a % c;
  ret = go(a, b / 2);
  ret = (ret * ret) % c;
  if(b % 2) (ret * (int)a) % (int)c;
  
  return ret;
}

int main() {
  cin >> a >> b >> c;
  cout << go(a, b) << "\n";
  return 0;
}