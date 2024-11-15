#include <iostream>
// About local and global variable with func;
using namespace std;
int glo=6;
void sum(){
    cout <<"\nOutside main"<<glo;
}
int main(){
    int glo=6;
    glo=78;
    cout <<"In the main"<<glo;
    sum();
//     int a=14;
//     int b =15;
//     float pi=3.14;
//     cout <<"This is tutorial 4 . Here the value of a is "<<a<<". The value of b is "<<b;
//    cout<<"The value of pi is "<<pi;
    return 0;
}