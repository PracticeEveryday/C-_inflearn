#include<bits/stdc++.h>
using namespace std;

string a;
string b;
string c;

string s;

int main () {
  cin >> a;
  // 김동현 바보를 입력하면 김동현 까지 나온다.
  // 즉 cin은 개행 문자 직전까지만 입력을 받는 친구이다.
  cout << a << "\n";

  // 개행 문자 두개를 입력 받으면 어떻게 될까?
  // 모든 문자열이 입력 받아 진다.
  // 김동현 바보
  cin >> b >> c;
  cout << b << " " << c << "\n";


  // scanf는 주로 입력 형식이 까다로울 때 사용하는 것이 좋다.
  // 보통은 cin을 쓰는 것이 좋다.

  // 개행 문자 직전까지 cin이 받는 데 한꺼번에 다 받고 싶으면 어떻게 하는 것이 좋을까?
  // getline을 응용하자
  getline(cin, s);
  cout << s << "\n";

  // getline()은 "\n" 까지 받으므로 cout를 할때 마지막에 "\n"을 넣지 않아도 괜찮다.
  for(int i = 0; i < 2; i++) {
    getline(cin, s);
    cout << s;
  }


  // 하지만, 몇 개를 받을 지 T개를 지정한 후 getline으로 입력 받을 때가 있다.
  // 이럴 때는 bufferflush로 getline이 전달 받은 \n을 없애주고 넘어가야 한다.
  int T;
  string z;

  cin >> T;
  // bufferflush를 안해주면 cin에서 입력 받을 때 전달되지 못하고 버퍼에 남은 \n이 바로 getline으로 출력 되기에
  // 조심해야 한다!

  string bufferflush;
  getline(cin, bufferflush);
  for(int i = 0 ; i < T; i++){
    getline(cin, s);
    cout << s << "\n";
  }
  /**
   * buffer는 \n도 받는다
   * cin 은 개행 문자는 남기고 전달하고
   * getlline은 \n 까지도 가져간다!
  */
  return 0;
}