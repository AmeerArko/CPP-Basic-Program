#include <iostream>
using namespace std;
class c2;
class c1{
    int val1;
    public:
    void indata(int a){
        val1=a;
    }
    void display(void){
        cout<< val1 <<endl;
    }
    friend void exchange (c1 &x,c2 &y );
};
class c2{
    int val2;
    public:
    void indata(int a){
        val2=a;
    }
    void display(void){
        cout<< val2 <<endl;
    }
    friend void exchange (c1 &x ,c2 &y );
};
void exchange (c1 &x,c2 &y){
    int temp;
    temp=x.val1;
    x.val1=y.val2;
   y.val2=temp;
}


int main(){
        c1 oc1;
        c2 oc2;

        oc1.indata(34);
        oc2.indata(67);
        exchange(oc1,oc2);
        cout<<"The value after exchenging becomes: ";
        oc1.display();
        cout<<"The value after exchenging becomes: ";
        oc2.display();
    return 0;
}