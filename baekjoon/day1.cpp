#include <bits/stdc++.h>
using namespace std;


int fibonacci(int n, int* zero_count, int* one_count) {
  if(n == 0) {
    (*zero_count)++;
    return 0;
  }
  if(n == 1) {
    (*one_count)++;
    return 1;
  }

  return fibonacci(n - 1, zero_count, one_count) + fibonacci(n - 2, zero_count, one_count);
}

int main () {
  int n;
  scanf("%d", &n);
  int zero_count = 0;
  int one_count = 0;

  fibonacci(n, &zero_count, &one_count);

  cout << one_count << " " << zero_count;
}