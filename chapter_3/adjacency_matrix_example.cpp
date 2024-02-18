#include<bits/stdc++.h>
using namespace std;
/**
 * 방문한 정점은 다시 방문하지 않는다.
*/

const int V = 10;

// visited[V] <- 방문한 거를 넣어놓는다!!
bool a[V][V], visited[V];


void go(int from) {
  // 방문 후 출력
  visited[from] = 1;
  cout << from << "\n";


  for(int i = 0; i < V; i++) {
    // 방문했으면 안간다!
    if(visited[i]) continue;

    // from -> i로 가는 것이다.
    if(a[from][i]) {
      go(i);
    }
  }
  return;
}

int main() {
  // 양방향 간선
  a[1][2] = 1; a[1][3] = 1; a[3][4] = 1;
  a[2][1] = 1; a[3][1] = 1; a[4][3] = 1;

  for(int i = 0; i < V; i++) {
    for(int j = 0; j < V; j++) {
      if(a[i][j] && visited[i] == 0) {
       go(i);
      }
    } 
  }
}