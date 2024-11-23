#include <iostream>
using namespace std;

// int sum(int a,int b){
//     int c=a+b;
//     return c;

// function prototype;
// type function name (arguments); 
// int sum(int,int)->acceptable cz its not important to recive the value with variables;
int sum(int a,int b);
void g(void);

// }

int main(){
    int num1,num2;
    cout <<"Enter Two integer :"<<endl;
    cin>>num1;
    cin>>num2;
   int d= sum(num1,num2);
//    num1 and num2 are actual parameter;
        cout<<"The sumationn is : "<<d<<endl;
        g();

    return 0;
}
int sum(int a,int b){
    // formal parameters a and b will take value from actual parameter num1 and num2;
    int c=a+b;
    return c;

}
void g(){
    cout<<"Hello Arko!,good morning"<<endl;
}