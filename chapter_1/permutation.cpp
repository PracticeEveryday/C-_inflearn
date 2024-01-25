/**
 * 순서와 상관 있게 뽑는다 >> 순열
 * 순서와 상관 없게 뽑는다 >> 조합
 * 
 * 순서를 재배치하여 ~~ 한 순서의 경우 max 값을 뽑아줘
*/


#include<bits/stdc++.h>
using namespace std;

int main () {
  int a[] = {1, 2, 3};
  vector<int> b = {1, 2, 3};
  do{
    // 순서와 상관 있게 출력한다.
    for(int i : a) cout << i << " ";
    cout << '\n';

  } while (next_permutation(&a[0], &a[0] + 3));
  //} while (next_permutation(a, a + 3));
}