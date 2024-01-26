#include<bits/stdc++.h>
using namespace std;

vector<int> v;

int n = 5, r = 3;

void printVector(vector<int> &v) {
  for(int i: v) cout << v[i] << " ";

  cout << '\n';
}

void combination (int start, vector<int> &v) {
  if(r == v.size()) {
    printVector(v);
    return;
  }

  for(int i = start + 1; i < n; i++) {
    v.push_back(i);
    combination(i, v);
    v.pop_back();
  }
}


int main () {
  combination(-1, v);
}