// Can you swap two numbers in C++ using a third variable?
// This program demonstrates how to swap two numbers in C++ using a third variable.
#include <iostream>
using namespace std;
int main()
{
    int a = 10;
    int b = 5;
    int temp;

    cout << "Before swap: a = " << a << ", b = " << b << endl;

    temp = a;
    a = b;
    b = temp;

    cout << "After swap: a = " << a << ", b = " << b << endl;

    return 0;
}
