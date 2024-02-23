#include<iostream>
#include<string>

using namespace std;

class roman_type
{
    public:
        string Value;

    public:
    roman_type(string value2)
    {
        Value=value2;

    }

    void converter()
    {
        int total=0;
        for(int i=0;i<Value.length();++i)
        {
            switch (Value[i])
            {
            case 'M':
                total+=1000;
                break;
            case 'D':
                total+=500;
                break;
            case 'C':
                total+=100;
                break;
            case 'L':
                total+=50;
                break;
            case 'X':
                total+=10;
                break;  
            case 'V':
                total+=5;
                break;
            case 'I':
                total+=1;
            default:
                break;
            }

        }
        cout<<"\nRoman:"<<Value<<" to decimal:"<<total;
    }
};

int main(void)
{
    string roman_input;
    cin>>roman_input;
    roman_type obj1(roman_input);
    obj1.converter();


    return 0;
}