#include <iostream>
using namespace std;
// int c=45;
int main(){
    // int a,b,c;
    // cout<<"Enter the value of a :"<<"\n";
    // cin>>a;
    // cout<<"Enter the value of b :"<<"\n";
    // cin>>b;
    // c=a+b;
    // cout<<"The sum c is : "<<c<<"\n";
    // cout<<"The global c is: "<<::c;//here c is representing the global variable c beacuase of '::' this .
// *****Reference variables******
// float x = 455;
// float & y = x;//with this '&' symbol y is refering to x;
// cout<<x<<endl;
// cout <<y<<endl;
// *******Typecasting ******
int a=45;
float b=45.54;
cout <<"The value of a is :"<<(float)a<<endl;
cout <<"The value of a is :"<<float(a)<<endl;
cout <<"The value of b is :"<<(int)b<<endl;
cout <<"The value of b is :"<<int(b)<<endl;
int c= int (b);
cout <<"The expression is "<<a+b<<endl;
cout <<"The expression is "<< a+int (b)<<endl;
cout<<"The expression is :"<<a+(int)b;
    return 0;
}