#include<bits/stdc++.h>
using namespace std;

struct Ralo {
  int a, b;
  double c, d, e;
};

void print(Ralo ralo) {
  cout << ralo.a << " " << ralo.b << " " << ralo.c << " " << ralo.d << " " << ralo.e << "\n"; 
}

int main() {
  Ralo ralo = {1, 1, 1, 1, 1};
  print(ralo);
  cout << ralo.a << "a\n";
  
  // vector에도 구조체 값을 넣을 수 있습니다.
  vector<Ralo> ret;
  ret.push_back({1, 2, 3, 4, 5});
  ret.push_back({1, 2, 3, 4, 6});
  ret.push_back({1, 2});
  //int 자료형에 값을 넣지 않으면 0으로 초기화되고, 
  // char 또는 string에 값을 넣지 않으면 빈 문자열이 들어가게 됩니다.
  ret.push_back({});

  for(Ralo ralo: ret) {
    print(ralo);
  }

  return 0;
}