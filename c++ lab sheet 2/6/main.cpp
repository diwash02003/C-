/*Define a class REPORT with the following specification:
Private members: adno (4 digits admission number), name (20 characters), marks (an array of 5
floating point values), average (average marks obtained), GETAVG() (a function to compute the
average obtained in five subject)
Public members: READINFO() – function to accept values for adno, name, marks. Invoke the
function GETAVG() and DISPLAYINFO() – function to display all data members of report on the
screen. You should give function definitions.*/


#include <iostream>

using namespace std;

class REPORT
{
private:
    int adno;
    char name[20];
    float marks[5];
    float average;
    float GETAVG(){
    float sum=0;
    for(int i=0;i<5;i++){sum+=marks[i];

    }
    return sum/5;
    }
public:
    void READINFO()
    {
        cout<< "Enter admission number:";
        lable:
            cin>>adno;
            if(adno>999 && adno<=9999)
                cout<<"accepted"<<endl;
            else
                {
                    cout<<"INVALID"<<endl;
            cout<<"PLS RE-ENTER"<<endl;
            goto lable;
            }
            cout<< "Enter name:";
            cin >> name;
            cout<< "Enter marks for five subjects:";
            for(int i=0;i<5;i++){
                    cin >> marks[i];}
            average= GETAVG();
    }
    void DISPLAYINFO()
    {
        cout<< "Admission number:"<< adno<<endl;
        cout<<"Name:"<<name<<endl;
        cout<<"Marks:";
        for(int i=0;i<5;i++)
            {
                cout<< marks[i]<< " ";
            }
        cout<<endl;
        cout<< "average:"<<average<<endl;
    }
};

int main()
{
    REPORT r;
    r.READINFO();
    r.DISPLAYINFO();

}
