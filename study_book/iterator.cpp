#include<bits/stdc++.h>
using namespace std;

vector<int> v;
int main () {
  for(int i = 1; i <=5; i++) v.push_back(i);
  for(int i = 0; i < 5; i++) {
    cout << &*(v.begin() + i) << '\n';
    // begin, end는 주소 값을 바로 반환하지 못한다.
    // 주소값을 접근하기 위해서는 & 주소 연산자를 사용해야한다.!!
    cout << i << "번쨰 요소: " << *(v.begin() + i) << "\n";
  }

  // vector<int>::iterator 타입이 너무 길어 auto로 선언했다.
  for(auto it = v.begin(); it != v.end(); it++) {
    cout << *it << " ";
  }

  cout << "\n";

  for(vector<int>::iterator it = v.begin(); it != v.end(); it++) {
    cout << *it << ' ';
  }
  cout << "\n";

  auto it = v.begin();
  advance(it, 3);
  cout << "\n";
  cout << *it << "\n";

  // cout << v.begin() << '\n'; //에러

  return 0;
}