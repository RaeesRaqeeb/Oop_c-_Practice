#include<iostream>
#include<string>

using namespace std;
class Operator_overloading
{
    private:
        int number_of_bullets_fired;


    public:
    Operator_overloading()
    {

    }

    Operator_overloading(int value):number_of_bullets_fired(value){}
    //When we don't put int in the argument it consider it as pre increament
        void operator ++()
        {
           ++number_of_bullets_fired;
            cout<<"\nThis is Post increment\n";
        }
    //When we put int in consider it as Post increment when calling by object
        int  operator -(Operator_overloading);
        

        int operator /(Operator_overloading );


};

int Operator_overloading::operator-(Operator_overloading obj)
    {
           int m= obj.number_of_bullets_fired+number_of_bullets_fired;
           return m;
        }

int Operator_overloading ::operator /(Operator_overloading Obj1)
        {
            int n= Obj1.number_of_bullets_fired*number_of_bullets_fired;
            return n;
        }
int main(void)
{
    Operator_overloading OP1(10),OP2(20),OP3(2);
    cout<<(OP1-OP2);
    //we have to set the operator from left to right low to high
    cout<<(OP3*OP2-OP1);

    return 0;
}