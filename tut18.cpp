#include <iostream>
//recursion;;
using namespace std;
// int factorial (int n){

//       if (n<=1){
//         return 1;
//       }

//     return n*factorial(n-1);
// }
// // what is recursion is doin??
// Factorial(4)= 4 *factorial(3);
// Factorial(4)= 4 * 3 *factorial(2);
// Factorial(4)= 4 * 3 * 2*factorial(3);
// Factorial(4)= 4 * 3 * 2 * 1;
int fib (int n){
    if (n<2){
        return 1;
    }
    return fib(n-2)+fib(n-1);
}

int main(){
        // factorial of a number 
        // n!=n*(n-1)!
        int a;
        cout<<"Enter a number : "<<endl;
        cin>>a;
        
        // cout<<"The factorial of"<<a<< "is : "<<factorial(a);
      cout<<"The numebr in fibonacci series at "<<a<<" psoition is "<<fib(a); 
    return 0;
}