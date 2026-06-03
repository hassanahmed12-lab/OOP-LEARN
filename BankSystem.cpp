#include <iostream>
using namespace std;
class BankAccount
{
protected:
    string accountHolder;
    float balance;
    int accountNumber;
    static int totalAccounts;
public:
    BankAccount()
    {
        accountHolder="unknown";
        balance=0.0;
        accountNumber=0;
    }
    BankAccount(string accHolder, float balancee, int accNum)
    {
        accountHolder=accHolder;
        balance=balancee;
        accountNumber=accNum;
        totalAccounts++;
        cout<<"Account number: "<<totalAccounts<<endl;
    }
    void deposit(float amount)
    {
        balance+=amount;
        cout<<"deposit succesful"<<endl;
    }
    virtual void withdraw(float amount)
    {
        if(balance>= amount)
        {
            cout<<"withdraw complete!"<<endl;
            balance-=amount;
        }
        else
            cout<<"error: balance insuficient"<<endl;
    }
    virtual void display()
    {
        cout<<"card Holder: "<<accountHolder<<endl;
        cout<<"card Number: "<<accountNumber<<endl;
        cout<<"card balance: "<<balance<<endl;
    }
};
int BankAccount::totalAccounts =0;
//hassan number one

int main()
{
    BankAccount b1("hassan", 50000, 343434), b2("ali", 20000, 545454);
    b1.deposit(500);
    b2.withdraw(600);
    b1.display();
    b2.display();

        return 0;
}
