/*5. Define a class BOOK with the following specifications :
Private members of the class BOOK are: BOOK NO (integer type),
BOOKTITLE (20 characters), PRICE (float), TOTAL_COST()
 (A function to calculate the total cost for N number of copies
  where N is passed to the function as argument).
Public members of the class BOOK are: INPUT() – function to read BOOK_NO.,
 BOOKTITLE, PRICE and PURCHASE()
– function to ask the user to input the number of copies to be purchased.
It invokes TOTAL_COST() and prints the total cost to be paid by the user.
Note: You are also required to give detailed function definitions.*/


#include <iostream>
#include <iomanip>

using namespace std;

class Book
{
private:
    int book_no;
    int N;
    char booktitle[20];
    float price;
    float total_cost(int N)
    {
        int Total;
        Total=price*N;
        cout<<"The total cost of Books is: "<<Total<<endl;
        return Total;
    }

public:
     void Input()
    {
         cout<<"Enter Book no: ";
         cin>>book_no;
         cout<<"Enter the book title: ";
         cin>>booktitle;
         cout<<"Enter the price of book: ";
         cin>>price;
     }
    void Purchase()
    {
        int N;
        cout<<"Enter the no. of books purchased:  ";
        cin>>N;
        cout<<endl<<"The Details of purchased Books is: "<<endl<<endl;
        cout<<"Book no= "<<book_no<<endl<<"Book title= "<<booktitle<<endl<<"Price per book= "<<price<<endl<<"Number of books purchased= "<<N<<endl;
        Book::total_cost(N);
    }
};

int main()
{
    Book b1;
    cout<<"Enter the details of book purchased: "<<endl<<endl;
    b1.Input();
    b1.Purchase();
    return 0;

}
