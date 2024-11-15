
// There are two types of header files;
// 1.System header file ->It comes with the compailer
#include <iostream> 
// ,2.User defined header file->It is written by the programmer ;
// #include "this.h"->this will produce an error 
//if this.h is not present in the files.
using namespace std;
int main()

{
    int a=4,b=5;
    cout <<"Arithmatic operators functionality:";
cout<< "The value of a+b is "<<a+b<<"\n";
cout<<"The value of a-b is  "<<a-b<< "\n";
cout<<"The value of a*b is  "<<a*b<< "\n";
cout<< "The value of a/b is "<<a/b<<"\n";
cout<<"The value of a%b is  "<<a%b<< "\n";
cout<<"The value of a++ is  "<<a++<< "\n";
cout<<"The value of a-- is  "<<a--<< "\n";
cout<<"The value of ++a is  "<<++a<< "\n";
cout<<"The value of --a is  "<<--a<< "\n\n\n";
cout <<"comparison operators :\n";
cout<< "The value of a==b is "<<(a==b)<<"\n";
cout<< "The value of a!=b is "<<(a!=b)<<"\n";
cout<<"The value of a>b is  "<<(a>b)<< "\n";
cout<<"The value of a<b is  "<<(a<b)<< "\n";
cout<< "The value of a<=b is "<<(a<=b)<<"\n";
cout<<"The value of a>=b is  "<<(a>=b)<< "\n";

    return 0;

}