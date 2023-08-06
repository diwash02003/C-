/*Create two classes named Mammals and MarineAnimals. Create another class named BlueWhale
which inherits both the above classes. Now, create a function in each of these classes which prints
"I am mammal", "I am a marine animal" and "I belong to both the categories: Mammals as well
as Marin Animals" respectively. Now, create an object for each of the above class and try calling
a. function of Mammals by the object of Mammal
b. function of MarineAnimal by the object of MarineAnimal
c. function of BlueWhale by the object of BlueWhale
d. function of each of its parent by the object of BlueWhale*/

#include<iostream>
using namespace std;

class mammals{
public:
    void displaymammal()
    {
        cout<< "I am mammal."<<endl;
    }
};
class marineanimal{
public:
    void displaymarineA()
    {
        cout << "I am marine animal."<<endl;
    }
};
class bluewhale:public mammals,public marineanimal{
public:
    void displayBW()
    {
        cout<< "I belong to both the categories: Mammals as well as Marin Animals."<<endl;
    }
};
int main()
{
    mammals m1;
    marineanimal m2;
    bluewhale m3;
    m1.displaymammal();
    m2.displaymarineA();
    m3.displayBW();
    m3.displaymammal();
    m3.displaymarineA();
}

