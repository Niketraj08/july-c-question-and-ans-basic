// How does C++ handle automatic number conversions?

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
