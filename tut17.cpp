#include <iostream>
using namespace std;

// inline int product (int a ,int b){
// //      //If you are using inline don't use inlie this will drain the memory.
// //    static int c=0;//static means this line will work for once .
// //     c=c+1;//Next time the func runs then the value of c will be retained .
//     return a*b+c;
// }
float moneyReceived(int currentMoney, float factor=1.04){

 return currentMoney * factor;
}

int main(){

        // int a,b;
        // cout<< "Enter the value of a and b :";
        // cin>>a>>b;
        // cout<<"The product of a and b is:"<<product(a,b)<<endl;
        // cout<<"The product of a and b is:"<<product(a,b)<<endl;
        // cout<<"The product of a and b is:"<<product(a,b)<<endl;
       int money;
       cout<<"Enter the amount :"<<endl;
       cin>>money;
       cout <<"If youn have "<<money<<"Taka, In your bank account ,You will receive "<<moneyReceived(money)<<" after one year"<<endl;
       // in the line before i didn't give any float value for that reason it will take that 1.04 as the float value.
        cout <<"For Arko:If youn have "<<money<<"Taka, In your bank account ,You will receive "<<moneyReceived(money,1.1)<<" after one year"<<endl;
    return 0;
}