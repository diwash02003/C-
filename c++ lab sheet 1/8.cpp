#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double radius, area;

    cout << "Enter radius of the circle: ";
    cin >> radius;

    area = M_PI *pow(radius, 2);

    cout << "Area of the circle is: " << area << endl;
    return 0;
}

