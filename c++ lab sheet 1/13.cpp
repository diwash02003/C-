#include <iostream>
using namespace std;
int main()
{
    char c;

    cout << "Enter a character: ";
    cin >> c;

    cout << "Next character: " << (char)(c + 1) << endl;
    return 0;
}

