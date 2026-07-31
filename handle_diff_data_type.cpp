// How C++ Handles Different Data Types.
#include <iostream>
using namespace std ;

int main() {
  int integerValue = 5;
  double doubleValue = 2.5;

  double result1 = integerValue + doubleValue;
  cout << "Integer + Double = " << result1 << endl;

  int result2 = integerValue + static_cast<int>(doubleValue);
  cout << "Integer + (Int)Double = " << result2 <<endl;

  double result3 = static_cast<double>(integerValue) / 2;
  cout << "(Double)Integer / 2 = " << result3 <<endl;

  return 0;
}
