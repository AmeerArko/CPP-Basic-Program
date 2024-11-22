#include <iostream>
using namespace std;

int main(){
        // what is pointer?
        // it is  a data type to holds the address of other data type.
int a =3;

int *b=&a;
// & ->adress of operator.
cout <<"The adress of a:"<<b<<endl;
cout <<"The adress of a:"<<&a<<endl;


// * ->reference operator.
cout<<"The value of adress b is : "<<*b<<endl;
// pointer to pointer 
int** c= &b;
cout<<"The adress of b is :"<<&b<<endl;
cout <<"The value of c is :"<<**c<<endl;
    return 0;
}