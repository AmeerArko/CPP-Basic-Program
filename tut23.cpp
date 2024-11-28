#include <iostream>
using namespace std;
class Employee
{
    int id;
   static int count;
    

public:
    void setData(void)
    {
        cout << "Enter the id: " << endl;

        cin >> id;
        count++;
    }
    void getData(void)
    {
        cout << "The Employee Id is :" << id << " and this is employee number :"<<count<<endl;
    }
    static void getcount(void){
        // cout<<id;//Throws an error static type function can only use static type varibale;
        cout<<"The value of count is : "<<count<<endl;
    }
};
int Employee :: count;//static variables default value is 0;

int main()
{
    Employee arko, rihan, riz;
    // arko.id=1;
    //              ...-->cant do that cz they are private variable ;
    // arko.count=1;
    // count is the static data member of the class employee;It's shares the upgraded value with new obj;
    arko.setData();
    arko.getData();
    Employee::getcount();

    rihan.setData();
    rihan.getData();
    Employee::getcount();
    riz.setData();
    riz.getData();
    Employee::getcount();
    return 0;
}