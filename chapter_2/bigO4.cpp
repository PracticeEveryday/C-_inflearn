#include <bits/stdc++.h>

using namespace std;

int N;

void solve(int N) {
  int a = 1, i = N;
  while (i > 0)
  {
    a += i;
    i /=2;
  }

  cout << a << '\n';
}

int main () {
  cin >> N;
  solve(N);
  return 0;
}

/*
 *
 * log 2 x => 2를 몇번 곱해야 x가 되는가?
 * log 2 32 => 2를 몇 번 곱해야 32가 되는가? -> 5번 곱하면 된다!
*/