#include <iostream>
using namespace std;
int main()
{
    double principle, rate, time, interest;

    cout << "Enter principle: ";
    cin >> principle;

    cout << "Enter rate: ";
    cin >> rate;

    cout << "Enter time: ";
    cin >> time;

    interest = (principle * rate * time) / 100;

    cout << "Simple interest: " << interest << endl;
    return 0;
}

