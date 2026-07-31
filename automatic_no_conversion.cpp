// How does C++ handle automatic number conversions?
// This program demonstrates automatic type conversion (also known as implicit type conversion or coercion) in C++.
#include <iostream>
using namespace std;
int main() {
 float floatValue = 3.14;
 int intValue = floatValue;
 char charValue = 'A';
 int charToInt = charValue;

 cout << "Float to Int: " << intValue << endl;
 cout << "Char to Int: " << charToInt << endl;

 return 0;
}
