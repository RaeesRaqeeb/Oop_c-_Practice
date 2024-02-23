#include<iostream>
#include<string>

using namespace std;

void notation_24(int time)
{
    if(time>= 12)
    {
        cout<<"Time is:"<<time<<" PM";
    }
    else if(time<12)
    {
        cout<<"Time is:"<<time<<" AM";
    }
}

void notation_12(int time)
{
    if(time>12)
    {
        cout<<"TIme in 12 hours notation:"<<time-12<<"PM"<<endl;

    }
    else if(time<=12)
    {
        if(time<12)
        cout<<"Time in 12 hours Notation:"<<time<<"AM";

        else
        cout<<"TIme in 12 hours notation :"<<time<<"PM";
    }
}


int main(void)
{
    int User_input;
    cout<<"Select the time notation type:";
    cout<<"\n1)24 notation\n2)12 notation\n";
    cin>>User_input;
    if(User_input==1)
    {
        cout<<"Input the time:";
        cin>>User_input;
        notation_24(User_input);
    }
    else if(User_input==2)
    {
        cout<<"Input the time:";
        cin>>User_input;
        notation_12(User_input);
    }
    else
    {
        cout<<"Wrong input"<<endl;
    }


    




    return 0;
}

