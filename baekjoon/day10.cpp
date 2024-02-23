#include<bits/stdc++.h>
using namespace std;

/**
 * 김지민 N명 토너먼트 진출
 * 1~N
 * 인접한 번호끼리 진행함
 * 홀수면 마지막 사람은 자동 진출
*/

// 2 < n < 십만
// int num = 16, kim = 1, lim = 2;
int num, kim, lim;
// 작은게 a
int min_val, max_val;
int cnt;
int main() {
  cin >> num >> kim >> lim;
  if(kim > lim) {
    min_val = lim;
    max_val = kim;
  } else {
    min_val = kim;
    max_val = lim;
  }

  while (num > 0)
  {
    // 홀수 라면
    if(num & 1) {
      num = (num / 2 ) + 1;
    } else {
      // 짝수라면
      num = num / 2;
    }
    if((max_val - min_val == 1) && ((max_val & 1) != 1)) {
      cnt++;
      break;
    }

    min_val = (min_val & 1) ? (min_val + 1) / 2 : (min_val / 2);
    max_val = (max_val & 1) ? (max_val + 1) / 2 : (max_val / 2);

    cnt++;
  }
  cout << cnt << "\n";
  return 0;
}