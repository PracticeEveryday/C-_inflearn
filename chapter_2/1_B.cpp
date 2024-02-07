#include <bits/stdc++.h>
using namespace std;

// 알파벳으로 이루어진 단어 S가 주어진다.
// 각 알파벳이 단어에 몇 개가 포함되어 있는지 구하자

// 단어의 길이는 100을 넘지 않으며, 알파벳은 소문자로만 이루어져 있다.

// 단어에 포함되어 있는 a의 개수 b의 개수 ~ z의 개수를 공백으로 구분하여 출력한다.

int main() {
  string input;
  cin >> input;

  int a[26];
  // 전부 0으로 초기화
  memset(a, 0, sizeof(a));

  // for(int i: a) cout << i << " ";
  for(int i = 0; i < input.size(); i++) {
    int char_num = (int)input[i] - (int)'a';
    a[char_num] = a[char_num] + 1;
  }

  for(int i: a) cout << i << " ";
  cout << "\n";
}