/**
 * 운영체제는 데이터 할당을 스택, 힙, 데이터 영역, 코드 영역으로 나누어 저장한다.
 * 
 * 1. 스택: 지연 변수, 매개 변수, 함수가 저장된다. <- 컴파일시 크기가 결정됨
 *          함수가 함수를 호출하는 케이스에 따라 런타임시 크기가 변경되기도 한다. [동적인 특징]
 * 2. 힙: 힙은 동적 할당 시 사용되며 런타임 시 크기가 결정된다.[동적인 특징]
 * 3. 데이터 영역: BBS영역과 Data 영역으로 나뉘고 정적 할당에 관한 부분을 담당한다.
 * 4. 코드 영역: 소스 코드가 들어간다.
*/


#include<bits/stdc++.h>

using namespace std;

int a;
int b = 0;

int main () {
  /**
   * 정적 할당은 컴파일 단계에서 메모리를 할당하는 것을 말한다.
   * BBS segment와 Data segment, code /text segment로 나뉜다.
   * 
   * 1. BBS -> 전역 변수, static, const로 선언되어 있는 변수 중 0으로 초기화 또는 초기화가 어떤 값으로도 되지 않은 변수들이 저장된다.
  */
  static int d;
  static int e = 0;

  /**
   * 2. Data segment는 static, const로 선언되어 있는 변수 중 0이 아닌 값으로 초기화 되어 있을 경우 Data segment 영역에 할당됩니다.
  */
  static int c = 2;
  return 0;
}