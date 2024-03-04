#include<bits/stdc++.h>
using namespace std;

int t;
pair<int, int> prArr[44];

int main() {

  prArr[0] = {1, 0};
  prArr[1] = {0, 1};

  for(int i = 2; i <= 40; i++) {
    prArr[i] = {(prArr[i - 2].first + prArr[i - 1].first), (prArr[i - 2].second + prArr[i - 1].second)};
  }

  // for(auto i : prArr) cout << i.first << " " << i.second << "\n";

  cin >> t;
  for(int i = 0; i < t; i++) {
    int temp;
    cin >> temp;

    cout << prArr[temp].first << " " << prArr[temp].second << "\n";
  }
  

  return 0;
}

/*
3
0
1
3

1 0
0 1
1 2
*/


/*
2
6
22


5 8
10946 17711
*/