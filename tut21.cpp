#include <iostream>
using namespace std;

class binary
{
    string s;

public:
    void read(void);
    void chk_bin(void);
};
void binary ::read(void)
{
    cout << "Enter a binary nmeber :" << endl;
    cin >> s;
}

void binary ::chk_bin(void)
{
    int i;
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect binary format" << endl;
            exit(0);
        }
        if (i == s.length() - 1)
        {
            cout << "Valid Binary inpiut";
        }
    }
}

int main()

{
    // OOPs-Classes and objects.
    //  c++ -->Initially called --> c with classes by stroustroup
    //  claa ---> ectensions of sturctures (in c);
    //  structures had limitations
    //      --> members are public;
    //      --> no methods;
    //  classes = structures + more;
    //  classes --> can have methods and properties;
    //   classses--> can make few member as private and few as public.
    //  structures in c++ are typedef;
    //  you can declare objects along with the class decLaraiton;
    binary b;
    b.read();
    b.chk_bin();
    return 0;
}