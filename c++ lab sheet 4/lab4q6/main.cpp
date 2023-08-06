#include <iostream>
using namespace std;

class RBI
{
public:
    float MinInterestRate, MinBalance, MaxWithdrawal;

    RBI(float interest, float blnc, float withdrawl)
    {
        MinInterestRate = interest;
        MinBalance = blnc;
        MaxWithdrawal = withdrawl;
    }
};

class Account
{
public:
    float balance, interestRate;

    Account(float initialBalance, float interest)
    {
        balance = initialBalance;
        interestRate = interest;
    }

    void deposit(float amount)
    {
        balance += amount;
    }

    void withdraw(float amount)
    {
        balance -= amount;
    }

    void display()
    {
        cout << "Account Balance: " << balance << endl;
    }
};

class Customer
{
public:
    string name, address;
    int age;

    Customer(string n, string addr, int a)
    {
        name = n;
        address = addr;
        age = a;
    }
};

class SBI : public RBI
{
public:
    SBI() : RBI(0.05, 500, 10000) {}
};

class ICICI : public RBI
{
public:
    ICICI() : RBI(0.06, 1000, 15000) {}
};

class PNB : public RBI
{
public:
    PNB() : RBI(0.04, 1000, 20000) {}
};

int main()
{ // Create an instance of Customer
    Customer cust("Ravi Timalsina", "Chitwan, Nepal", 25);

    // Create an instance of SBI account
    SBI sbi;

    // Create an instance of Account
    Account acc(5000, 0.05);

    // Deposit and withdraw some amount
    acc.deposit(1000);
    acc.withdraw(500);

    //  displays account balance

    acc.display();

    return 0;
}
