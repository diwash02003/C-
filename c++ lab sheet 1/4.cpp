#include <iostream>
using namespace std;
int main()
{
    double fahrenheit, centigrade;

    cout << "Enter temperature in Fahrenheit: ";
    cin >> fahrenheit;

    centigrade = (fahrenheit - 32) * 5 / 9;

    cout << "Temperature in Centigrade: " << centigrade << endl;
    return 0;
}
