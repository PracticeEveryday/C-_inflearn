/**
 * 조합에는 순서가 없다.
 * 몇 명을 뽑아서 갈 것인가를 쓸 때 조합을 쓴다.
 * 순서는 상관 없고 몇 명을 '다양하게' 뽑을 때 사용한다.
 * 
 * nCr
 * n : total number of objects in the set
 * r : number of choosing objects from the set
*/
// 4개 이상 뽑으면 재귀함수가 좋다.
// 3개 이하는 중첩 포문이 좋다. > 구현하기 편리하기 때문에!


#include<bits/stdc++.h>
using namespace std;

int n = 5;
int k = 3;
int a[5] = {1, 2, 3, 4, 5};

void print(vector<int> b) {
  for(int i : b) cout << i << " ";
  cout << '\n';
}

void combi (int start, vector<int> &b) {
  if(b.size() == k ) {
    print(b);
    return;
  }

  for(int i = start + 1; i < n; i++) {
    b.push_back(i);
    combi(i, b);
    b.pop_back();
  }

  return;
}


int main () {
  vector<int> b;
  combi(-1, b);
  return 0;
}