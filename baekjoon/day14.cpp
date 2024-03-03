#include<bits/stdc++.h>
using namespace std;

/**
 * 64cm 막대기가 존재한다.
 * 막대를 더 작은 막대로 자른 대음에 풀을 붙여 X인 막대기가 가지고 싶다.
 * 
 * 1. 가지고 있는 막대를 전부 더한다. <- 처음에는 64cm 막대 하나만 있다.
 * 2. 가지고 있는 막대 중 가장 짧은 것을 절반으로 자른다.
 * 3. 만약 위에서 자른 막대 절반 중 하나를 버리고 남아 있는 막대의 길이 합이 X보다 크거나 같으면 자른 막대의 절반 중 하나를 버린다.
 * 4. 남아 있는 모든 막대를 풀로 붙여 X를 만든다.
*/

// x<=64
int x;

int stick = 64;
int cnt;
int main() {
  cin >> x;

  while (x != 0)
  {
    if(x >= stick) {
      x = x - stick;
      cnt++;
    }
    stick = stick / 2;
  }
  cout << cnt << "\n";

  return 0;
}

/*
23

4

32

1

64

1
*/