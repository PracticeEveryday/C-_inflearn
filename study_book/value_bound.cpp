#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main () {
  vector<int> a = {1, 2, 3, 3, 3, 4, 5};
  
  cout << lower_bound(a.begin(), a.end(), 3) - a.begin()<< "\n"; // 시작 지점 2
  cout << upper_bound(a.begin(), a.end(), 3) - a.begin()<< "\n"; // 끝나는 지점 5

  cout << &*lower_bound(a.begin(), a.end(), 3)<< "\n";  // 0x147606868
  cout << &*a.begin() << "\n";                          // 0x147606860
  cout << &*(a.begin() + 1) << "\n";                    // 0x147606864

  cout << upper_bound(a.begin(), a.end(), 3) - lower_bound(a.begin(), a.end(), 3) << "\n"; // 3
  vector<int> a2 = {1, 2, 3, 3, 4, 100};

  cout << *lower_bound(a2.begin(), a2.end(), 100) << "\n"; 


  vector<int> a3;
  for(int i = 0; i < 5; i++) a3.push_back(i);
  a3.push_back(7);

  // 2 3 4 5 7
  // 0 1 2 3 4 -> 6이 7보다 작으므로 4번쨰 반환
  cout << upper_bound(a3.begin(), a3.end(), 6) - a3.begin() << "\n"; // 5
  cout << lower_bound(a3.begin(), a3.end(), 6) - a3.begin() << "\n"; // 5
}