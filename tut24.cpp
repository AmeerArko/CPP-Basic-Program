#include <iostream>
using namespace std;

class Employee{
int id=0;
int salary;

public :
void setId(void){
    
    cout<<"Enter the id of your employee :"<<endl;
    cin>>id;
}
void getId (void){
    cout<<"The id of this employee is : "<<id<<endl;
}

};

int main(){
        // Employee arko,antu,riha,riz;
        // arko.setId();
        // arko.getId();
        Employee fb[4];
        for (int i = 0; i < 4; i++)
        {
           fb[i].setId();
           fb[i].getId();


        }
        

    return 0;
}