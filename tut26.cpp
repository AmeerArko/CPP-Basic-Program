#include <iostream>
using namespace std;
// froword declaration.
class complex;

class calculator{
    public : 
    int add (int a,int b){
        return (a+b);
    }
   int sumRealComplex(complex , complex);
    int sumCompComplex(complex , complex);
};


class complex
{
    int a;
    int b;
    // // Individually declearing as a friend;
    // friend int calculator :: sumRealComplex(complex ,complex );
    // friend int calculator :: sumCompComplex(complex ,complex );
    // // Alter: Declearing the entire calculator class as friend; 

   friend class calculator;
public:
    void setNumber(int v1, int v2)
    {
        a = v1;
        b = v2;
    }
    


    void printnumber()
    {
        cout << "Your complex number is " << a << " + " << b << "i" << endl;
    }
};
int calculator :: sumRealComplex(complex o1,complex o2){
    return (o1.a + o2.a);
}
int calculator :: sumCompComplex(complex o1,complex o2){
    return (o1.b + o2.b);
}

int main(){
    complex c1,c2;
    c1.setNumber(1,2);
    c1.printnumber();
    c2.setNumber(3,4);
    c2.printnumber();

    calculator calc1,calc2;
    int result1 =calc1.sumRealComplex(c1,c2);
    cout<<"The real part sum is "<<result1<<endl;
       int result2 =calc2.sumCompComplex(c1,c2) ;
         cout<<"The complex part sum is "<<result2<<"i"<<endl;

    return 0;
}