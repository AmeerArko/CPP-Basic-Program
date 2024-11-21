#include <iostream>
using namespace std;
int main(){

    // ***control structure using if/ else ****.
     int age;
     cout<<"Tell me your age:";
    cin>>age;
    // if (age<18){
    //     cout<<"You cannot come to my party!"<<endl;
    // }
       
       
    //  else if(age==18){
    //         cout<<"You are a kid and you'll get a kid pass to the party!!"<<endl;
    //        }
           
    //         else{
    //             cout <<"You can come to the party!"<<endl;
    //         }
    // selection control structure : Switch case statements
    switch(age)
    {
        case 18:
        cout<<"You are 18!";
        break;
        case 22 :
        cout<<"You are 22!"<<endl;
        break;
        case 2:
        cout<<"You are 2!"<<endl;
        break;
        default :
        cout<<"No special cases"<<endl;

    }
        
    
    return 0;
}