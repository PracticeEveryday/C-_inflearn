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
int n, m, bundle[54], each[54];

int ret;
int main() {
  cin >> n >> m;

  for(int i = 0; i < m; i++) {
    cin >> bundle[i] >> each[i];
  }

  sort(bundle, bundle + m, less<int>());
  sort(each, each + m, less<int>());

  int min_bundle = bundle[0];
  int min_each = each[0];

  // 낱개 하나가 번들 하나보다 비싸면 그냥 번들로 산다.
  if(min_each > min_bundle) {
    while (n > 0)
    {
      ret += min_bundle;
      n -= 6;
    }
    cout << ret << "\n";
    exit(0);
  }

  // 묶음이 제일 싼 낱개 * 6 보다 크면 그냥 낱개로 산다.
  if(min_bundle > (6 * min_each)) {
    cout << n * min_each << "\n";
    exit(0);
  }

  while (n > 6)
  {
    ret += min_bundle;
    n -= 6;
  }

  if((n * min_each) > min_bundle) {
    ret += min_bundle;
  } else {
    for(int i = 0; i < n; i++) {
      ret += min_each;
    }
  }

  

  cout << ret << "\n";

  // for(int i: bundle) cout << i << " ";
  // cout << '\n';

  // for(int i: each) cout << i << " ";
  // cout << '\n';
  return 0;
}

/*
15 1
100 40

300
*/

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

/*
9 16
21 25
77 23
23 88
95 43
96 19
59 36
80 13
51 24
15 8
25 61
21 22
3 9
68 68
67 100
83 98
96 57

6
*/