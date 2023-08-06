#include <iostream>
#include <iomanip>

using namespace std;

class Batsman {
private:
  int bcode;
  char bname[20];
  int innings;
  int notout;
  int runs;
  float batavg;

  void calcavg() {
    batavg = (float)runs / (innings - notout);
  }

public:
     void readdata()
   {
       cout<<"The detail of match: "<<endl<<endl;
       cout<<"Batsman code(only accept 4 digit code)= ";
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
    cout << "Enter bname: ";
    cin >> bname;
    cout << "Enter innings: ";
    cin >> innings;
    cout << "Enter notout: ";
    cin >> notout;
    cout << "Enter runs: ";
    cin >> runs;

    calcavg();
  }

  void displaydata() {
    cout << "Batsman code: " << bcode << endl;
    cout << "Batsman name: " << bname << endl;
    cout << "Innings: " << innings << endl;
    cout << "Not out: " << notout << endl;
    cout << "Runs: " << runs << endl;
    cout << "Batting average: " << batavg << endl;
  }
};

int main()
{
Batsman batsman;
batsman.readdata();
cout<<endl<<"The details of the batsman is: "<<endl<<endl;
batsman.displaydata();
return 0;
}
