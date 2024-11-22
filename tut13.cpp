#include <iostream>
using namespace std;
// basic Array.

int main(){
        int marks []={12,13,14,15};
        int math_marks[4];
         math_marks[0]=190;
         math_marks[1]=191;
         math_marks[2]=192;
         math_marks[3]=193;
        cout<<"The marks are: "<<endl;
        cout <<marks[0]<<endl;
        cout <<marks[1]<<endl;
        cout <<marks[2]<<endl;
        cout <<marks[3]<<endl;
        cout<<"The math  marks are: "<<endl;
        cout<<math_marks[0]<<endl;
        cout<<math_marks[1]<<endl;
        cout<<math_marks[2]<<endl;
        // changing elements of array;
        math_marks[3]=194;
        cout<<math_marks[3]<<endl;
        // arrays poiter ...do get the adress of an array we dont have to use '&';
        int *p=marks;
        cout<<"Marks with pointer :"<<endl;
        cout<<"The value with pointer of marks[0]: "<<*(p++)<<endl;
        cout<<"The value with pointer of marks[1]: "<<*(p++)<<endl;
        cout<<"The value with pointer of marks[2]: "<<*(p++)<<endl;
        cout<<"The value with pointer of marks[3]: "<<*(p++)<<endl;






    return 0;
}