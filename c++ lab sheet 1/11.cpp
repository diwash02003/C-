#include <iostream>
using namespace std;
int main()
{
    int num1, num2, num3;

    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;

    int largest = (num1 > num2) ? num1 : num2;
    largest = (largest > num3) ? largest : num3;

    cout << "Largest number: " << largest << endl;
    return 0;
}

