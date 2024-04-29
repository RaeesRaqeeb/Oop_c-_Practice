#include<iostream>
#include<string>

using namespace std;


class Forwarde_function;

class Base_function{

    public:
        int num;


    friend class Forwarde_function;

    public:

        void display()
        {
            cout<<"\nThis is the private function:"<<num<<endl;
        }
    
    friend void operator ++(Base_function &obj);

};

void operator++(Base_function &obj)
{
        ++obj.num;   
}




class Forwarde_function
{
    public:



    Forwarde_function(Base_function &obj)
    {
        int num=10;
        ++obj;
    }       
};


int main(void)
{

    Base_function obj1;
    ++obj1;
    obj1.display();
    return 0;
}


