#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
// 시간 초과
/*
  자연수를 원소로 갖는 공집합이 아닌 A, B 집합
  대칭 차집합의 원소의 개수를 출력하는 프로그램을 출력하자


  대칭 차집합 -> (A - B) + (A + B)
  대칭 차집합의 원소의 개수 출력
*/

int a, b;
// int a = 3, b = 5;
vector<ll> av, bv;
// vector<ll> av = {1, 2, 4}, bv = {2, 3, 4, 5, 6};
int main() {
  cin >> a >> b;
  cin.ignore(); // 이전에 남아있는 개행 문자를 무시함

  for(int i = 0; i < a; i++) {
    ll temp = 0;
    cin >> temp;
    av.push_back(temp);
  }

  for(int i = 0; i < b; i++) {
    ll temp = 0;
    cin >> temp;
    bv.push_back(temp);
  }

  // 교집합 넣어주기
  vector<ll> iv;
  for(int i = 0; i < av.size(); i++) {
    // vector 갑이 있으면 iv에 넣어준다.
    if(find(bv.begin(), bv.end(), av[i]) != bv.end()) {
      iv.push_back(av[i]);
    }
  }
 

  // for(auto i: iv) cout << i << " ";
  // cout << "\n"; 

  vector<ll> only_a;
  for(int i = 0; i < av.size(); i++) {
    // iv에 없으면 only_a에 넣어준다.
    if(find(iv.begin(), iv.end(), av[i]) == iv.end()) {
      // cout << "av[i]" << av[i] << " ";
      only_a.push_back(av[i]);
    }
  }


  vector<ll> only_b;  
  for(int i = 0; i < bv.size(); i++) {
    if(find(iv.begin(), iv.end(), bv[i]) == iv.end()) {
      // cout << "bv[i]" << bv[i] << " ";
      only_b.push_back(bv[i]);
    }
  }

  // for(auto i: only_a) cout << i << " ";
  // cout << "\n"; 

  // for(auto i: only_b) cout << i << " ";
  // cout << "\n"; 

  cout << only_a.size() + only_b.size() << "\n";
  return 0;
}


/*
3 5 
1 2 4
2 3 4 5 6

4(대칭 차집합의 원소 개수)
*/



// vector<ll> iv;
  // set_intersection(av.begin(), av.end(), bv.begin(), bv.end(), back_inserter(iv));

  // for(auto i: iv) cout << i << " ";
  // cout << "\n"; 