#include <bits/stdc++.h>
using namespace std;

int n = 5, a[5] = {2, 3, 4, 5, 6};


int main() {
  for(int i = 0; i < n; i++) {
    for(int j = i + 1; j < n; j++){
      for(int z = j + 1; z < n; z++) {
        cout << i << " "  << j << " " << z << '\n';
      }
    }
  }
}