#include <iostream>
using namespace std;
// function overloading.
int add(int a ,int b){
    return a+b;
}
int add(int a ,int b,int c){
    return a+b+c;
}

int main(){
     int a,b,c;
     cout <<"Enter 3 numbers:"<<endl;

    cin>>a;
    cin>>b;
     cin>>c;
     cout<<"The sum of "<<a<<" and "<<b<<" is :"<<add(a,b)<<endl;
        cout <<"The sum of "<<a<<" & "<<b<<" & "<<c<<" is :"<<add(a,b,c)<<endl;

    return 0;
}