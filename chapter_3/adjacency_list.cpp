// adj

#include<bits/stdc++.h>
using namespace std;

const int V = 4;

// 백터가 여러개 있는 것이다.
// 정점마다 연결리스트가 필요하니까!!
vector<int> adj[V];

int main() {
  adj[0].push_back(1);  
  adj[0].push_back(2);  
  adj[0].push_back(3);

  adj[1].push_back(0);  
  adj[1].push_back(2);

  adj[2].push_back(0);
  adj[2].push_back(2);

  adj[3].push_back(0);

  for(int i = 0; i < V; i++) {
    cout << i << " :: ";
    for(int there: adj[i]) {
      cout << there << " ";
    }
    cout << "\n";
  }

  // 이렇게도 가능
  for(int i = 0; i < 4; i++) {
    cout << i << " :: ";
    for(int j = 0; j < adj[i].size(); j++) {
      cout << adj[i][j] << " ";
    }

    cout << "\n";
  }
}