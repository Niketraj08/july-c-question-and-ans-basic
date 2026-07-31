// #include <bits/stdc++.h>
// using namespace std;

// int fact(int n) {
//     if (n > 1) 
//         return n * fact(n - 1);
//     else
//         return 1;
// }

// int main() {
//     int number = 4;
//     cout << "Factorial of " << number << " = " << fact(number);
    
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std; 
int fact (int n ){
    if(n==0 || n==1){
        return 1;
    }
    
    return n * fact (n-1); ;

}

int main (){
    int num= 6 ;
    cout <<"fact is :"<<num<< " = " << fact (num)<<endl;
    return 0 ;
}