#include <iostream>
using namespace std;
int main()
{
    int x, y, temp;

    cout << "Enter value of x: ";
    cin >> x;

    cout << "Enter value of y: ";
    cin >> y;

    cout << "Before swapping, x = " << x << " and y = " << y << endl;

    temp = x;
    x = y;
    y = temp;

    cout << "After swapping, x = " << x << " and y = " << y << endl;
    return 0;
}

