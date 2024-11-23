#include <iostream>

using namespace std;
// structures,unions,anums.

struct employee
{

int eId;//4 byte
char favChar;//1 byte
float salary;//4 byte

};
// difference between sturct and union 
// struct will allocate total 9 byte but union will take 4 byte the maximum byte.
union money{

    int rice;
    char car;
    float pounds;

};

int main(){
        struct employee arko;

        union money m1;
        m1.rice=34;
        // m1.car='p';
        // m1.pounds=23000.02;
cout<<"The informationn for union :"<<endl;
        // cout<<m1.rice<<endl;
        // cout<<m1.car<<endl;   -> This will give error becuase union can show one info at a time cz
        // the max memory is 4 byte.
        // cout<<m1.pounds<<endl;
        cout<<m1.rice<<endl;

        arko.eId=1;
        arko.favChar='a';
        arko.salary=120000;
        cout<<"The iformation for structure:"<<endl;

        cout <<"The value of salary is :"<<arko.salary<<endl;
        cout <<"The value of id is :"<<arko.eId<<endl;
        cout <<"The value of favourite character is :"<<arko.favChar<<endl;


    return 0;
}