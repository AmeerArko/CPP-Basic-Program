#include <iostream>
using namespace std;
// constractor and distractor.
class complex {
    int a ,b;
    public :
    // creating constructor.
    // constractor is a special member function with same name  as of the clas.
    //   It is automatically invoked whenever an object is created;
    // It is used to initialize the objects of its class
   complex (void);// constructor declaration
   
    void printnumber()
    {
        cout << "Your complex number is " << a << " + " << b << "i" << endl;
    }

};
complex :: complex(void){
    a=10;
    b=0;
}
int main(){
        complex c;
        c.printnumber();

    return 0;
}