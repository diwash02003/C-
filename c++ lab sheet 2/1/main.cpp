/*Define a class student with the following specification:
Private members of class student: admno (integer),
sname (20 characters), eng (float), math (float),
science (float), total (float), ctotal()
– a function to calculate eng + math + science with float return
type.
Public member function of class student: takedata()
– Function to accept values for admno, sname,
eng, science and invoke ctotal() to calculate total and showdata()
– Function to display all the data
members on the screen*/

#include <iostream>
#include<string>
using namespace std;
class student
{
private:
    int admno;
    string sname;
    float eng, math, science, total;
    float ctotal() {return eng + math +science;}

public:
    void takedata()
    {
        cout<<"Enter admission number:";
        cin>>admno;
        cout<<"Enter student name:";
        cin>>sname;
        cout<<"Enter marks in English:";
        cin>>eng;
        cout<<"Enter marks in Mathematics:";
        cin>>math;
        cout<<"Enter marks in Science:";
        cin>>science;
        total=ctotal();
    }
    void showdata()
    {
        cout<<"Admission number:"<<admno<<endl;
        cout<<"Student name:"<<sname<<endl;
        cout<<"Marks in English:"<<eng<<endl;
        cout<<"Marks in Mathematics:"<<math<<endl;
        cout<<"Marks in Science:"<<science<<endl;
        cout<<"Total marks:"<<total<<endl;
    }
};
int main()
{
    student s;
    s.takedata();
    s.showdata();
}
