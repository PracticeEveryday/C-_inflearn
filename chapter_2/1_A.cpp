// #include <bits/stdc++.h>
// using namespace std;

// void printV(vector<int> v) {
//   for(int i = 0 ; i < v.size(); i++){
//     cout << v[i] << " ";
//   }
//   cout << "\n";
// }

// int main () {
//   // 일곱 난쟁이의 키의 합은 100이다.
//   // 난쟁이의 키가 나올 때 100인 것을 찾자

//   int key = 0;
  
//   vector<int> v;


//   for(int i = 0 ; i < 9; i++) {
//     scanf("%d", &key);
//     v.push_back(key);
//     key = 0;
//   }
//   printV(v);
//   sort(v.begin(), v.end());
  
//   // 9개중에 7개를 뽑아야 한다. > 순서와 상관 없이 7개를 뽑으니 조합을 쓴다.
//   // 이 중 합이 100인걸 뽑으면 된다.
//   // 천만 정도 넘어가야 많다고 할 수 있다.

//   printV(v);
//   do{
//     // for(int i: v) cout << i << " ";
//     // cout << "\n";
//     int sum = 0;
//     for(int i = 0; i < 7; i++) sum += v[i];
//     if(sum == 100) break;
//   } while (next_permutation(v.begin(), v.end()));

//   for(int i = 0; i < 7; i++) {
//     cout << v[i] << "\n";
//   }
// }




#include <bits/stdc++.h>
using namespace std;


void printV(int * arr) {
  for(int i = 0; i < 9; i++) {
    cout << arr[i] << " ";
  }
  cout << "\n";
}

int main() {
  int a[9];
  for(int i = 0; i < 9; i++) {
    cin >> a[i];
  }
  sort(a, a + 9);

  do{
    int sum = 0;
    for(int i = 0; i < 7; i++) {
      sum += a[i];
    }
    if(sum == 100) break;
  }while (next_permutation(a, a+ 9));
  
  for (int i = 0; i < 7; i++) {
    cout << a[i] << " ";
  }

  cout << "\n";
}