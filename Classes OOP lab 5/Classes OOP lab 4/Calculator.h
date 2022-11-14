//#pragma once
#pragma once

#include <iostream>
#include <string>

using namespace std;

template <typename T, size_t L>
class Calculator {
private:
    T data_one;
    T data_two;
    T data_tree;
    T data_four;
    T data_five;
    T* arr;
    T tempObject;

public:
    T& operator [] (int a) {
        if (a > L)
            cout << "error" << endl;
        return arr[0];
    }
    Calculator() {

    };
    void square(T a, T b, T c, T d) {
        cout << "Square of " << a << " is " << a * a << endl;
        cout << "Square of " << b << " is " << b * b << endl;
        cout << "Square of " << c << " is " << c * c << endl;
        cout << "Square of " << d << " is " << d * d << endl;
    }
    void SumOfNumbers(T a, T b, T c, T d) {
        cout << "Sum of " << a << b << c << d << " is " << a + b + c + d << endl;
    }
    void findTheSmallest(T a, T b, T c) {
        if (a <= b && a <= c)
            cout << a << " is smallest" << endl;
        else if (b <= a && b <= c)
            cout << b << " is smallest" << endl;
        else
            cout << c << " is smallest" << endl;
    }
    void Swap(T& obj1, T& obj2) {
        T temp(obj1);
        obj1 = obj2;
        obj2 = temp;
    }
    ~Calculator()
    {
        cout << "destroy calculator" << endl;
    }

};

//#include <iostream>
//#include <string>
//
//using namespace std;
//
//template <typename T, size_t L>
//class Calculator {
//private:
//    T data_one;
//    T data_two;
//    T data_tree;
//    T data_four;
//    T data_five;
//
//    T tempObject;
//    T* arr;
//public:
//    T& operator [] (int a);
//    Calculator();
//    void square(T a, T b, T c, T d);
//    void SumOfNumbers(T a, T b, T c, T d);
//    void findTheSmallest(T a, T b, T c);
//    void Swap(T& obj1, T& obj2);
//
//    ~Calculator();
//
//};
//
