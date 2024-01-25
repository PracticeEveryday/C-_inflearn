#include<bits/stdc++.h>
using namespace std;

vector<int> v;

void printV(vector<int> &v) {
  for(int i = 0; i < v.size(); i++) {
    cout << v[i] << " ";
  };
  cout << "\n";
}

// n 개중에 r 개를 뽑아 순열을 만들어 준다.
void makePermutation(int n , int r, int depth) {
  cout << n << " : " << r << " : " << "depth: " << depth << '\n';
  if(r == depth) {
    printV(v);
    return;
  }

  for(int i = depth; i < n; i++) {
      // depth를 기반으로 i와 바꿔준다.
      swap(v[i], v[depth]);
      // 함수가 종료될 때까지 실행된다.
      makePermutation(n, r, depth + 1);
      // 원복을 해야 계속 만들 수 있다!
      swap(v[i], v[depth]);
  }
  
}

int main () {
  for(int i = 1; i <= 3; i++) v.push_back(i);

  makePermutation(3, 3, 0);
}
