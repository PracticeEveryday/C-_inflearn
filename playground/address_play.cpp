#include<bits/stdc++.h>
using namespace std;
int main() {

    // 맵 선언
    std::map<int, int> mp;
    cout << "맵 자료구조 주소: " << &mp << "\n";
    cout << "맵 자료구조 주소(10진수): " << reinterpret_cast<uintptr_t>(&mp) << "\n";
    cout << "\n";
    
    // 맵에 요소 추가
    mp[1] = 10;
    mp[2] = 20;
    mp[3] = 30;
    mp[4] = 40;

    // 맵의 각 요소의 키, 값, 그리고 해당 키와 값의 주소 출력
    cout << "키\t값\t키 주소\t\t\t키 주소(10진수)\t\t값 주소\t\t\t값 주소(10진수)" << "\n";
    for (const auto& pair : mp) {
        std::cout << pair.first << "\t" << pair.second << "\t" 
                  << &pair.first << "\t\t"
                  << reinterpret_cast<uintptr_t>(&pair.first) << "\t\t" 
                  << &pair.second << "\t\t"
                  << reinterpret_cast<uintptr_t>(&pair.second) << "\n";
    }

    cout << mp[30] << "\n"; // 여기서 에러가나

    auto it = mp.find(3);
    
    if (it != mp.end()) {
        cout << "키 3에 해당하는 값은 " << it->second << "입니다." << endl;
    } else {
        cout << "키 3에 해당하는 값이 맵에 없습니다." << endl;
    };

    return 0;
}
