#include<iostream>
#include<string>


using namespace std;

class OP_Fir
{
    public:
            int number;
    
    public:
        OP_Fir()
        {

        }
        OP_Fir(int value):number(value){}


        friend int operator+(OP_Fir Obj1,OP_Fir Obj2);
        friend void operator ++(OP_Fir &obj3);


};

int operator+(OP_Fir Obj1, OP_Fir obj2)
{
    return Obj1.number+obj2.number;
}

void operator++(OP_Fir &obj3)
{
    ++obj3.number;
}

int main(void)
{

    OP_Fir Obj1(10);
    OP_Fir Obj2(20);
    cout<<Obj1+Obj2;
    ++Obj1;
    cout<<Obj1.number<<endl;

    return 0;
}