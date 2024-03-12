#include<bits/stdc++.h>
using namespace std;
/**
 * 1부터 연속적으로 번호가 붙어 있는 스위치가 있습니다.
 * 스위치는 켜져 있거나 꺼져 있는 상태입니다.
 * 
 * 1은 켜저 있음.
 * 0은 꺼져 있음.
 * 
 * 남학생은 스위치 번호가 받은 수의 배수이면 스위치 상태를 바꾼다.
 * 켜져 있으면 켠다. 꺼져 있으면 끈다.
 * 
 * 여학생은 좌우가 대칭이면 스위치 상태를 모두 바꾼다.
 * 
*/

// 스위치 개수
// n <= 100
int n;
int a[104];
// 학생 수
// k <= 100
int k;

// 학생이 받은 성별, 학생이 받은 수

int main() {
  cin >> n;

  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }

  cin >> k;
  for(int i = 0; i < k; i++) {
    int sex;
    int switch_num;
    cin >> sex >> switch_num;
    int cache = switch_num;
    switch_num = switch_num - 1;
    // 성별이 남이면 스위치의 배수를 모두 바꿈
    if(sex == 1) {
      int j = 1;
      for(int i = cache; i < n; i = cache * j) {
        a[i - 1] = a[i - 1] ? 0 : 1;
        j = j + 1;
      }
    } else {
      a[switch_num] = a[switch_num] ? 0 : 1;
      for(int i = switch_num + 1, j = switch_num - 1; i < n; i++, j--) {
        if(i > n) {
          break;
        }
        if(j < 0) {
          break;
        }
        if(a[i] == a[j]) {
          a[i] = a[i] ? 0 : 1;
          a[j] = a[j] ? 0 : 1;
          
        }

        if(a[i] != a[j]){
          a[i] = a[i] ? 0 : 1;
          a[j] = a[j] ? 0 : 1;
          break;    
        }
      }
    }  
  }

  for(int i = 0; i < n; i++) {
    cout << a[i] << " ";
  }
  cout << "\n";
  
  return 0;
}

/*
8
0 1 0 1 0 0 0 1
2
1 3
2 3

1 0 0 0 1 1 0 1
*/