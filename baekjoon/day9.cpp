#include<bits/stdc++.h>
using namespace std;


/**
 * 강토 기타에서 N개의 줄이 끊어졌다!
 * 줄을 사거나 교체해야 한다.
 * 
 * 6줄 패키지를 살 수 있고, 그 이상의 줄을 낱개로 살 수 있다.
 * 
 * 개타줄 개수 N개와 브랜드 M개가 주어진다.
 * 브랜드에서 파는 6개 기타줄 가격, 낱개 기타줄 가격이 나온다.
 * `적어도` N개를 사기 위해 필요한 돈의 최소 금액을 구하라
*/


// N <=100, M <= 50
// M개의 줄에 패키지 가격과 낱개의 가격이 공백으로 주어진다.
int n, m;
vector<pair<int, int>> v;

bool compare(pair<int, int> pr1, pair<int, int> pr2) {
  if(pr1.first == pr2.first) {
    return pr1.second < pr2.second;
  }

  return pr1.first < pr2.second;
}

int temp1, temp2;
int ret;
int main() {
  cin >> n >> m;

  for(int i = 0; i < m; i++) {
    cin >> temp1 >> temp2;
    v.push_back({temp1, temp2});
  }

  sort(v.begin(), v.end(), compare);



  // while (n > 0)
  // {
  //   if(n > 6) {

  //     n =- 6;
  //   }
  // }
  

  for(auto i: v) cout << i.first << " : " << i.second << "\n";
  return 0;
}

/*
4 2
12 3
15 4

12
*/


/*
10 3
20 8
40 7
60 4

36
*/

/*
15 1
100 40

300
*/