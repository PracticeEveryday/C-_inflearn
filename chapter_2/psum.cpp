#include<bits/stdc++.h>
using namespace std;

int n, m, a[100004], psum[100004], b, c;

int main() {
  cin >> n >> m;
  for(int i = 1; i<= n; i++) {
    cin >> a[i];
    psum[i] = psum[i-1] + a[i];
  }

  for(int i = 0; i < m; i++) {
    cin >> b >> c;
    cout << psum[c] - psum[b - 1] << "\n";
  }

  return 0;
}