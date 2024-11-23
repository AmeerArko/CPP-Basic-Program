#include <iostream>
using namespace std;
int sum(int a ,int b){
    int  c=a+b;
    return c;

}
int swap (int a,int b){
    int temp=a;         
    a=b;                 
    b=temp;              
}
int swapPointer(int* a,int *b){// temp a  b
    int temp=*a;         //   4   4  5
    *a=*b;                // 4   5  5 
   * b=temp;              //4   5  4 
}
// call by refrence in c++ using refrence variables
void swapReferancevar(int &a,int &b){// temp a  b
    int temp=a;         //   4   4  5
    a=b;                // 4   5  5 
   b=temp;              //4   5  4 
}
int main(){
    int a=4, b=5;
 cout<<"The sum of 4 and 5 is : "<<sum(4,5)<<endl;
 cout<<"The value of a is :"<<a<<endl;
 cout<<"The value of b is :"<<b<<endl;



 swap(a,b);//This will not swap a and b;
 cout<<"The value after swap is :"<<endl;
 cout<<"The value of a :"<<a<<endl;
 cout<<"The value of b :"<<b<<endl;


//  swapPointer (&a,&b);//This will swap the adress of the integers and 
//  //fiunction will take the adress as a pointer then 
//  //change the adress end of the it will change the value;
//  cout<<"The value after swapPointer  is :"<<endl;
//  cout<<"The value of a :"<<a<<endl;
//  cout<<"The value of b :"<<b<<endl;
 
 swapReferancevar (a,b);
 cout<<"The value after swapRefrencevar is :"<<endl;
 cout<<"The value of a :"<<a<<endl;
 cout<<"The value of b :"<<b<<endl;
 


    return 0;
}