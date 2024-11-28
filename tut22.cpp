#include <iostream>
using namespace std;

class shop
{
    int itemId[100];
    int itemPrice[100];
    int counter;

public:
    void initcounter(void)
    {
        counter = 0;
    }
    void getPrice(void);
    void setPrice(void);
};
void shop::setPrice(void)
{
    cout << "Enter The id of the item no :" << endl;
    cin >> itemId[counter];
    cout << "Enter the price of the item :" << endl;
    cin >> itemPrice[counter];
    counter++;
}

void shop ::getPrice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The price of the item " << itemId[i] << " is :" << itemPrice[i] << endl;
    }
}
int main()
{
    shop dukan;
   dukan.initcounter();
    dukan.setPrice();
    dukan.setPrice();
    dukan.setPrice();
    dukan.getPrice();

    return 0;
}