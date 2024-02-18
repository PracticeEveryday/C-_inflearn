#include<bits/stdc++.h>
using namespace std;

/**
 * P[0], P[1] ... P[N-1]은 0~ N-1까지 수를 한 번씩 포함하고 있는 수열이다.
 * 수열 P를 길이가 N인 배열 A에 적용하면 길이가 N인 배열 B가 된다.
 * 
 * B[P[i]] = A[i];
 * 
 * A가 주어졌을 때 P를 적용한 결과가 비 내림차순이 되는 수열
 * 비 내림차순은 각각의 원소가 `바로` 앞에 있는 원소보다 크거나 같은 경우
 * 여러 개라면 사전순으로 앞서는 것 출력
 * 
*/

bool compareSecond(const pair<int, int>& a, const pair<int, int>& b) {
    if(a.second == b.second) return a.first < b.first;
    return a.second < b.second;
}

// 배열 A의 크기 N은 50보다 작거나 같은 수
int n;

// 배열원소는 1000보다 작거나 같은 수
vector<pair<int, int>> v;

int temp, p[54];

int main() {
  cin >> n;
  for(int i = 0; i < n; i++) {
    cin >> temp;
    v.push_back({i, temp});
  }


  // for(auto i: v) cout << i.first << " : " << i.second << "\n";
  // cout << "\n";
  
  sort(v.begin(), v.end(), compareSecond);

  // for(auto i: v) cout << i.first << " : " << i.second << "\n";
  // cout << "\n";

  for(int i = 0; i < v.size(); i++) {
    p[v[i].first] = i;
  }

  for(int i = 0; i < v.size(); i++) {
    cout << p[i] << " ";
  }
  cout << "\n";
}