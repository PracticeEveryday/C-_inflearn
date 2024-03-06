#include<bits/stdc++.h>
using namespace std;

/**
 * 노래마다 랭킹 리스트가 있다.
 * 게임 할 때마다 비 오름차순으로 저장되어 있다.
 * 
 * 보통 위에서 몇 번째에 있는 점수인지로 결정한다. 같은 점수가 있을 때는 등수 중 가장 작은 등수가된다.
 * 
 * 100 90 90 80 => 1, 2, 2, 4
 * 
 * 새로운 점수가 랭킹 리스트에서 몇 등을 하는 지 구하는 프로그램
 * 올라 갈 수 없을 정도로 낮으면 -1
 * 꽉 차 있다면 더 좋을 때만 점수가 바뀜
*/

// 0 <=N <= max
// 0 <= score <= 20억
// 0 <= max <= 50
// int N = 3, p = 1;
// long long score = 6;
// a는 N이 0이 아닐 때만 주어진다.
// long long a[] = {12, 11};

int N, p;
long long score;
long long a[54];
map<int ,int> mp;

int ranking = 1;
int cnt;
int main() {
  cin >> N >> score >> p;

  if(N == 0) {
    ranking = 1;
  }

  for(int i = 0; i < N; i++) {
    cin >> a[i];
  }

  for(int i = 0; i < N; i++) {
    if(a[i] > score) {
      ranking = ranking + 1;
    } else if(a[i] == score){
    } else {
      break;
    }

    cnt++;
  }

  if(cnt == p) {
    ranking = -1;
  }
  cout << ranking << "\n";  
  return 0;
}

/*
5 5 2
14 13 12 11 10

-1
*/