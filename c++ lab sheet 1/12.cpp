#include <iostream>
using namespace std;
int main()
{
    int amount;

    cout << "Enter amount: ";
    cin >> amount;

    cout << "500 : " << amount / 500 << endl;
    amount %= 500;
    cout << "100 : " << amount / 100 << endl;
    amount %= 100;
    cout << "50 : " << amount / 50 << endl;
    amount %= 50;
    cout << "20 : " << amount / 20 << endl;
    amount %= 20;
    cout << "10 : " << amount / 10 << endl;
    amount %= 10;
    cout << "5 : " << amount / 5 << endl;
    amount %= 5;
    cout << "1 : " << amount / 1 << endl;

    return 0;
}

