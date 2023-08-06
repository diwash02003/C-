/*Define a class TEST in C++ with following description:
Private Members: TestCode (of type integer),
Description (of type string),
NoCandidate (of type integer),
CenterReqd (of type integer),
a member function CALCNTR() to calculate and return the
number of centers as (NoCandidates/100+1)

Public Members: A function SCHEDULE() to allow user to enter values for
 TestCode,
 Description,
NoCandidate &
call function CALCNTR() to calculate the number of Centres
A function DISPTEST() to allow user to view the
content of all the data members*/

#include<iostream>
using namespace std;
class TEST
{
private:
    int TestCode, NoCandidate,CenterReqd;
    string Description;
    int CALCNTR(){return NoCandidate/100+1;}
public:
    void SCHEDULE()
    {
        cout<< "Enter Testcode:";
        cin>>TestCode;
        cout<< "Enter Description:";
        cin>> Description;
        cout<< "Enter NoCandidate:";
        cin>>NoCandidate;
        CenterReqd=CALCNTR();
    }
    void DESPTEST()
    {
        cout<< "TestCode:" << TestCode << endl;
        cout<< "Description:" << Description <<endl;
        cout<< "NoCandidate:" << NoCandidate << endl;
        cout<< "CenterReqd:" << CenterReqd <<endl;
    }
};
int main()
{
    TEST t;
    t.SCHEDULE();
    t.DESPTEST();
    return 0;
}


