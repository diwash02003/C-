/*Define a class in C++ with following description:
Private Members: A data member Flight number of type integer, A data member Destination of type
string, A data member Distance of type float, A data member Fuel of type float, A member function
CALFUEL() to calculate the value of Fuel as per the following criteria
 Distance Fuel
 <=1000 500
 more than 1000 and <=2000 1100
 more than 2000 2200
Public Members: A function FEEDINFO() to allow user to enter values for Flight Number,
Destination, Distance & call function CALFUEL() to calculate the quantity of Fuel and A function
SHOWINFO() to allow user to view the content of all the data members.*/

#include<iostream>
#include <string>
using namespace std;
class Flight
{
private:
    int Flightnumber;
    string Destination;
    float Distance;
    float Fuel;

    void CALFUEL()
    {
        if(Distance<=1000)
        {
            Fuel=500;
        }
        else if(Distance> 1000 && Distance<=2000)
        {
            Fuel=1100;
        }
        else
        {
            Fuel=2200;
        }
    }
public:
    void FEEDINFO()
    {
        cout<< "Enter Flight number:";
        cin>> Flightnumber;
        cout<< "Enter Destination:";
        cin >> Destination;
        cout<< "Enter Distance:
            ";
        cin>> Distance;
        CALFUEL();
    }
    void SHOWINFO()
    {
        cout<< "Flight Number:"<<Flightnumber<<endl;
        cout<<"Destination:"<<Destination<<endl;
        cout<< "Diatance:"<< Distance<<endl;
        cout<< "Fuel:" <<Fuel<<endl;
    }
};
int main()
{
    Flight F;
    F.FEEDINFO();
    F.SHOWINFO();
    return 0;
}
