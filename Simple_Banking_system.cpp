// Code By Tayra Raqeeb.
//Simple Bank Management system.
#include<iostream>
#include<time.h>

using namespace std;

class Bank_account
{
    public:
        int Current_balance=0, account_number=0;
        string Account_holder_name;

};




int main(void)
{
    Bank_account User1,User2;
    User1.account_number=1234;
    User1.Current_balance=10000;
    User1.Account_holder_name="Raqeeb";

    int user_input;
    while(1)
    {
    cout<<"\nBank Account System\n"<<endl;
    cout<<"1)create Account\n";
    cout<<"2)If you already have account\n";
    cout<<"3)To exit.\n";

    cin>>user_input;
    if(user_input==1)
    {
        cout<<"\nAccount Holder name:";
        cin>>User2.Account_holder_name;

        cout<<"\nAmount You want to diposit:";
        cin>>User2.Current_balance;

        cout<<"Your account number is:";
        srand(time(NULL));
        User2.account_number=((rand()%9000) +8435);
        cout<<User2.account_number;
         while(1)
            {
            cout<<"\n1)To Deposit Money\n2)Withdraw\n3)Current Balance\n4)exit\n";
            cout<<"User_input:";
            cin>>user_input;
            if(user_input==1)
            {
                cout<<"\nHow much money you want to deposit:";
                cin>>user_input;
                User2.Current_balance+=user_input;

            }
            else if(user_input==2)
            {
                cout<<"\nHow much money you want to Withdraw:";
                cin>>user_input;
                if(user_input<=User2.Current_balance)
                {
                    User2.Current_balance-=user_input;
                    cout<<"\nYour remaining Balance is:"<<User2.Current_balance;
                }
                else if(user_input>User1.Current_balance)
                {
                    cout<<"\nYour Current Balance is Low ! "<<User2.Current_balance;

                }
            }
            else if(user_input==3)
            {
                cout<<"\nYour current balance is :"<<User2.Current_balance<<endl;
            }
            else if(user_input==4)
            {
                break;
            }

            }
       
    }
    else if(user_input==2)
    {
        int compare;
        cout<<"\nEnter your Account Number:";
        cin>>compare;
        if(User1.account_number == compare)
        {
            cout<<"Your current balance is :"<<User1.Current_balance;
            while(1)
            {
            cout<<"\n1)To Deposit Money\n2)Withdraw\n3)Current Balance\n4)exit\n";
            cout<<"User_input:";
            cin>>user_input;
            if(user_input==1)
            {
                cout<<"\nHow much money you want to deposit:";
                cin>>user_input;
                User1.Current_balance+=user_input;

            }
            else if(user_input==2)
            {
                cout<<"\nHow much money you want to Withdraw:";
                cin>>user_input;
                if(user_input<=User1.Current_balance)
                {
                    User1.Current_balance-=user_input;
                    cout<<"\nYour remaining Balance is:"<<User1.Current_balance;
                }
                else if(user_input>User1.Current_balance)
                {
                    cout<<"\nYour Current Balance is Low ! "<<User1.Current_balance;

                }
            }
            else if(user_input==3)
            {
                cout<<"\nYour current balance is :"<<User1.Current_balance<<endl;
            }
            else if(user_input==4)
            {
                break;
            }


            }
        }
    }
    else if(user_input==3)
    {
        break;
    }

    }






    return 0;
}