#include <bits/stdc++.h>
using namespace std;
// discount calculator

class stock
{
    int icode;
    char item[20];
    float price;
    int qty;
    float discoun;
    void Finddis() //Private memeber function
    {
        if (qty <= 50)
        {
            discoun = 0;
        }
        else if (qty <= 100)
        {
            discoun = 5;
        }
        else if (qty > 100)
        {
            discoun = 10;
        }
    }

public:
    void buy();     //Public memeber function
    void showall(); //Public memeber function
};

void stock::buy() // explict function defination
{
    cout << "Enter the Item code ";
    cin >> icode;
    cout << "Enter the Item";
    cin >> item;
    cout << "Enter the Qty";
    cin >> qty;
    cout << "Enter the price";
    cin >> price;
    Finddis();
}
void stock::showall() // explict function defination
{
    cout << "Item code : " << icode << endl;
    cout << " Item  : " << item << endl;
    cout << "Quantity : " << qty << endl;
    cout << "Price :" << price << endl;
    cout << "Discount :" << discoun << endl;
}
int main()
{
    stock s1; // created one stock object
    char ch;
    s1.buy();
    cout << "\n Do you see the status ??(y/n)";
    cin >> ch;
    if (ch == 'y' || ch == 'Y')
    {
        s1.showall();
    }

    else
    {
        exit(0);
    }
    return (0);
}