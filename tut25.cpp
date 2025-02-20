#include <iostream>
using namespace std;
class complex
{
    int a;
    int b;

public:
    void setData(int v1, int v2)
    {
        a = v1;
        b = v2;
    }
    friend complex setDataBySum(complex o1, complex o2);
    void printnumber()
    {
        cout << "Your complex number is " << a << " + " << b << "i" << endl;
    }
};
complex setDataBySum(complex o1, complex o2)
{
    complex o3;
    o3.setData((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}
int main()
{
    complex c1, c2, c3;
    c1.setData(1, 2);
    c1.printnumber();
    c2.setData(3, 4);
    c2.printnumber();
    c3=setDataBySum(c1, c2);
    c3.printnumber();

    return 0;
}