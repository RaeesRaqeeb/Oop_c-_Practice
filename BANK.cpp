#include<iostream>
#include<string>

using namespace std;

class BANK
{
    public:
        double current_balance;

    BANK()
    {

    }
    BANK(double current_balance2)
    {
        if(current_balance2<0)
        {
            cout<<"Invalid initial account balance:";
            current_balance=0.0;
        }
        else if(current_balance2>=0)
            current_balance=current_balance2;
        
    }

    void Deposit(double amount)
    {
        current_balance+=amount;
    }

    bool withdraw(double amount)
    {
        if(amount>current_balance)
        {
            cout<<"\nInsufficient Balance";
            return false;
        }
        else if(amount<current_balance)
        {
            current_balance-=amount;
            return true;
        }
        else{
            return false;
        }
    }

    void Current_balance()
    {
        cout<<"\nCurrent Balance:"<<current_balance;
    }
    ~BANK()
    {

    }
     void display()
        {
            cout<<"\nCurrent Balance:"<<current_balance;
        }


};

class SavingAccount:public BANK
{
    public:
        double doubleerest_rate;

        SavingAccount()
        {
            doubleerest_rate=1;
        }
        SavingAccount(double current_balance2, double doubleerest_rate2):BANK(current_balance2)
        {
            this -> doubleerest_rate=doubleerest_rate2;
        }

        void calculate_doubleerest()
        {
            cout<<"\nInterest:"<<(doubleerest_rate/100)*current_balance;
             BANK::current_balance+=(doubleerest_rate/100)*current_balance;
        }

        void Deposit(double amount)
        {
            BANK::Deposit(amount);
        }

        void withdraw(double amount)
        {
            BANK::withdraw(amount);
        }
         void display()
        {
            cout<<"\nCurrent Balance:"<<BANK::current_balance;
        }



};

class CurrentAccount:public BANK
{
    public:
            double charges;

            CurrentAccount(double amount,double charges):BANK(amount)
            {
                this->charges=charges;
            }

            void withdraw(double amount)
            {
                if(BANK::withdraw(amount))
                {
                    current_balance-=charges;
                }
                else
                {
                    cout<<"\nYou have insifficient balance in your account";
                }
            }

            void Deposit(double amount)
            {
                BANK::Deposit(amount);
                current_balance-=charges;
            }

        void display()
        {
            cout<<"\nCurrent Balance:"<<current_balance;
        }
};

int main(void)
{
    BANK B(1000);
    B.display();
    cout<<"\nEnter the initital amount of your bank account:";
    double current_balance;
    cin>>current_balance;
    double charges,rate;
    cout<<"\nEnter the interest rate:";
    cin>>rate;

    cout<<"\nEnter the charge per transaction:";
    cin>>charges;
    SavingAccount S1(current_balance,rate);
    S1.calculate_doubleerest();
    S1.display();
    cout<<"\nEnter the amount you want to deposit:";
    double amount;
    cin>>amount;
    S1.Deposit(amount);
    cout<<"\nEnter the amount you want to withdraw:";
    cin>>amount;
    S1.withdraw(amount);
    CurrentAccount C1(5000,charges);
    cout<<"\nEnter the amount you want to deposit:";
    cin>>amount;
    C1.Deposit(amount);
    cout<<"\nEnter the amount you want to withdraw:";
    cin>>amount;
    C1.withdraw(amount);

    cout<<"\nSAVING ACCOUNT INFO\n";
    S1.display();

    cout<<"\nCURRENT ACCOUNT INFO\n";
    C1.display();
    return 0;
}