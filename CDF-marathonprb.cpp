#include <iostream>
using namespace std;

int main(){
        int x;
        cin>>x;
        if(x<3){
            cout<<"Gold.";
        }
       else if(x<6){
            cout<<"Silver.";
        }
        else{
            cout<<"Bronze.";
        }

    return 0;
}