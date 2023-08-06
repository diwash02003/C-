
/*Define a class batsman with the following specifications:
Private members: bcode (4 digits code number), bname (20 characters),
 innings (integer), notout
(integer), runs (integer), batavg (calculated according to the
formula: batavg =runs/[innings-notout]), calcavg()
– Function to compute batavg
Public members: readdata()
– Function to accept value from bcode, name, innings, notout and invoke
the function and displaydata()
– Function to display the data members on the screen.
*/

#include <iostream>

using namespace std;

class batsman{
private:
    int bcode, innings, notout, runs, batavg;
    string bname;

    void calcavg()
    {
        batavg= (float)runs/(innings-notout);
    }
public:
    void readdata()
    {
        cout<<"Enter bcode:";
       lable:
       cin>>bcode;
       if(bcode>999 && bcode<=9999)
           cout<<"accepted!"<<endl;
       else
       {
           cout<<"INVALID CODE!"<<endl;
           cout<<"PLS RE-ENTER CODE!"<<endl;
           goto lable;
       }
        cout<<"Enter bname:";
        cin>>bname;
        cout<<"Enter innings:";
        cin>>innings;
        cout<<"Enter notout:";
        cin>>notout;
        cout<<"Enter runs:";
        cin>>runs;
        calcavg();
    }
    void dispalydata()
    {
        cout<<"Bcode:" <<bcode<<endl;
        cout<< "Bname:" <<bname<<endl;
        cout<< "Innings:" <<innings<<endl;
        cout<< "Notout:" <<notout<<endl;
        cout<< "Runs:" <<runs<<endl;
        cout<< "Batting average:"<<batavg<<endl;
    }
};
int main()
{
    batsman b;
    b.readdata();
    b.dispalydata();
    return 0;
}
