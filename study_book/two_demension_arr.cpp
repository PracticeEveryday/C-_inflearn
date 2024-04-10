#include<bits/stdc++.h>
using namespace std;

// 1. vector안에 vector가 들어 있는 2차원 배열 타입 선언
vector<vector<int>> v;
// 2. 10 * 10 크기의 2차원 배열 생성 + 0으로 초기화
vector<vector<int>> v2(10, vector<int>(10, 0));

// 3. 10개짜리 배열을 선언
vector<int> v3[10];

int main () {
  for(int i = 0; i < 10; i++) {
    // temp라는 빈배열 v에 추가
    vector<int> temp;
    v.push_back(temp);
  }

  return 0;
}