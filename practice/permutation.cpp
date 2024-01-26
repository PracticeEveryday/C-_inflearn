#include <bits/stdc++.h>
using namespace std;

/**
 * 아래 부분을 지우고 순열을 구현해보자
*/

vector<int> v;

void printV(vector<int> &v) {
  for(int i = 0; i < v.size(); i++) {
    cout << v[i] << " ";
  };
  cout << "\n";
}

/**
 * 순열
*/
void makePermutation (int n, int r, int depth) {
  cout << n << " " << r << " depth: " << depth << '\n';
  if(depth == n) {
    printV(v);
    return;
  }

  for (int i = depth; i < n; i++) {
    swap(v[i], v[depth]);
    makePermutation(n, r, depth + 1);
    swap(v[i], v[depth]);
  }
}

int main () {
  for(int i = 1; i <= 3; i++) v.push_back(i);

  makePermutation(3, 3, 0);
}