auto innerFunction = []() {
      cout << "함수 실행" << "\n";
  };

  cout << "익명 함수 주소 " << &innerFunction << "\n";
  innerFunction();