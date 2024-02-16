#include<bits/stdc++.h>
using namespace std;

/**
 * Nkg 설탕을 배달해야함.
 * 3, 5 킬로브램 봉지가 있다.
 * 
 * 가장 작은 개수
 * 정확하게 N킬로그램을 못만들면 -1을 출력하자
*/

// 3 ~ 5000
int N;
int cnt;
int main() {
  cin >> N;

  while (N>=0) {
		if (N % 5 == 0) {	
			cnt += (N / 5);	
			cout << cnt << endl;
			return 0;
		}
		N -= 3;	
		cnt++;	
	}

  if(N != 0) cout << -1 << "\n";
  else cout << cnt << "\n";
  
  
  return 0;
}

/*
18
4

4
-1

6
2

9
3

11
3

*/