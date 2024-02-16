#include<bits/stdc++.h>
using namespace std;


/**
 * (제로)https://www.acmicpc.net/problem/10773
 * 
 * 나코더 기장 재민이는 동아리 회식 준비를 위해 장부 관리중
 * 재현이는 잘 못된 수를 부를 떄마다 0을 외쳐 재민이가 쓴 수를 지우게 한다.
 * 모든 수를 적은 후 합을 알고 싶다.
*/

// K개의 줄에 정수 1개씩 주어짐 ( 1 ~ 100만 )
int k; // 1 ~ 10만
int a;
int ret;
stack<int> stk;

// 0이 들어오면 앞 수를 지운다!
int main() {
  cin >> k;

  for(int i = 1; i <= k; i++) {
    cin >> a;
    if(a == 0) {
      if(stk.size()) stk.pop();
    } else {
      stk.push(a);
    }
  }
  int size = stk.size();
  for(int i = 0; i < size; i++) {
    // cout << "top: " << stk.top() << " ";
    ret += stk.top();
    stk.pop();
  }

  cout << ret << "\n";
  
  return 0;
}

/*
4
3
0
4
0

0
*/

/*
10
1
3
5
4
0
0
7
0
0
6

7
*/