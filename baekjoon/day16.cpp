#include<bits/stdc++.h>
using namespace std;

/**
 * 무한히 큰 배열에 분수들이 적혀 있다.
 * X가 주어 졌을 때 X번째 분수를 구하는 프로그램을 작성해라
*/

// 1 <= x <= 천만
long long x;
long long sqeunce_val = 0;
long long sum = 0;
vector<string> v;

int main() {
  cin >> x;
  while (sum <= x)
  {
    sqeunce_val = sqeunce_val + 1;
    sum += sqeunce_val;    
  }

  for(long long i = 1; i <= sqeunce_val; i++) {
    v.push_back(to_string(i) + "/" + to_string(sqeunce_val - i + 1));
  }
  
  if((sqeunce_val + 1) & 1) {
    // 홀수면 뒤에서부터
    cout << v.at(v.size() - (sum - x + 1)) << "\n";
  } else {
    // 짝수면 차례대로
    cout << v.at(sum - x) << "\n";
    
  }
  
  return 0;
}