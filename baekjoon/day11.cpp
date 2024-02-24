#include<bits/stdc++.h>
using namespace std;

/**
 * 정수 집합 S가 주어질 때 [A, B] 를 조은 구간이라고 한다.
 * A < B 만족
 * A <= x <= B 모든 정수 x가 S에 속하지 않는다.
 * 
*/

// 집합 S의 크기 L
// 1 <= l <= 50
int l;

// 집합에 포함된 정수
vector<int> v;

// 포함하는 정수
int n;

int a, b;
long long cnt;
int main() {
  cin >> l;
  for(int i = 0; i < l; i++) {
    int temp;
    cin >> temp;
    v.push_back(temp);
  }

  cin >> n;
  sort(v.begin(), v.end(), less<int>());

  a = v.at((upper_bound(v.begin(), v.end(), n) - v.begin()) == 0 ? 0 : (upper_bound(v.begin(), v.end(), n) - v.begin()) - 1);
  b = v.at(lower_bound(v.begin(), v.end(), n) - v.begin());

  
  if ((b - n) * (n - a) == 0) {
    cout << 0 << "\n";
    exit(0);
  }

  if(a == b) {
    cout << (n * (b - n)) - 1 << "\n";
    exit(0);
  }

  
  cnt = (b - n) * (n - a) - 1;

  cout << cnt << "\n";
  return 0;
}


/*
4
1 7 14 10
2

4
*/

/*
5
4 8 13 24 30
10

5
*/

/*
5
10 20 30 40 50
30

0
*/

/*
8
3 7 12 18 25 100 33 1000
59

1065
*/