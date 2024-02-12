#include <iostream>
using namespace std;
class WrappedIterator {

  public:
    int value;

  public:
    WrappedIterator(int val) : value(val) {}

    WrappedIterator& operator++() {
        ++value;
        return *this;
    }

    WrappedIterator operator++(int) {
        WrappedIterator result(*this);
        ++(*this);
        return result;
    }

    WrappedIterator& operator--() {
        --value;
        return *this;
    }

    WrappedIterator operator--(int) {
        WrappedIterator result(*this);
        --(*this);
        return result;
    }

    int getValue() const {
        return value;
    }
};

int main() {
    WrappedIterator iterator(5);

    iterator = (++iterator).value + 1;
    cout << "iterator value: " << iterator.getValue() << "\n"; // 7
    iterator = (iterator++).value + 1;
    cout << "iterator value: " << iterator.getValue() << "\n"; // 8
    iterator = (++iterator).value + 1;
    cout << "iterator value: " << iterator.getValue() << "\n"; // 10
    iterator = (iterator++).value + 1;
    cout << "iterator value: " << iterator.getValue() << "\n"; // 11
    

    // auto new_iterator = iterator++;
    // auto new_iterator_2 = ++iterator;

    // iterator++;
    // iterator++;
    // iterator++;

    // cout << "iterator value: " << iterator.getValue() << "\n";
    // cout << "new iterator value: " << new_iterator.getValue() << "\n";
    // cout << "new iterator 2 value: " << new_iterator_2.getValue() << "\n";

    // cout << "check: " << (iterator.getValue() == new_iterator.getValue()) << "\n";

    // new_iterator++;
    // new_iterator_2++;

    // cout << "iterator value: " << iterator.getValue() << "\n";
    // cout << "new iterator value: " << new_iterator.getValue() << "\n";
    // cout << "new iterator 2 value: " << new_iterator_2.getValue() << "\n";
    
    return 0;
}

// #include<bits/stdc++.h>
// using namespace std;
// int g_test = 0;

// int& getNumberReference()
// {
//      return g_test;
// }

// int getNumberValue()
// {
//      return g_test;
// }

// int main()
// {
//     int& n = getNumberReference();
//     int m = getNumberValue();
//     cout << "n: " << n << "\n";
//     n = 10;
    
//     cout << g_test << endl; // prints 10
//     g_test = 0;
//     m = 10;
//     cout << g_test << endl; // prints 0
//     return 0;
// }