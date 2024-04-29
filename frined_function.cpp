#include<iostream>
#include<string>


using namespace std;

class COMPLEX_NUMBER
{
    private:
            float real_part1,real_part2;
            float image_part1,image_part2;
    public:
    COMPLEX_NUMBER()
    {

    }

    COMPLEX_NUMBER(float real1,float image1,float real2,float image2):real_part1(real1),image_part1(image1),real_part2(real2),image_part2(image2){}

    friend void arithmatic_function(COMPLEX_NUMBER& obj);

};


void arithmatic_function(COMPLEX_NUMBER& obj)
{
    
    cout<<"\nWhat you want to do?"<<endl;
    int user_input;
    cout<<"\n1)Addition\n2)Subtraction\n3)multiplication\nInput:"<<endl;
    cin>>user_input;
    switch (user_input)
    {
    case 1:
        cout<<"Sum of real parts:"<<obj.real_part1 +obj.real_part2<<endl;
        cout<<"Sum of Imaginary Parts:"<<obj.image_part1+obj.image_part2<<"i\n";
        break;
    
    case 2:
        cout<<"Subtract of Real Parts:"<<(obj.real_part1>obj.real_part2)?obj.real_part1-obj.real_part2:obj.real_part2-obj.real_part1;  
        cout<<"\nSubtraction of Imaginary:"<<(obj.image_part1>obj.image_part2)?obj.image_part1-obj.real_part1: obj.image_part2-obj.image_part1;
        cout<<"i";
    case 3:
         cout<<"Multiplication of real parts:"<<obj.real_part1*obj.real_part2;
         cout<<"Multiplication of Imaginary:"<<obj.image_part1*obj.image_part2<<" i\n";
        break;
    
    default:
        cout<<"\nWrong input\n"<<endl;
        break;

    }
}


int main(void)
{
    COMPLEX_NUMBER C1(1,2,3,4);

    arithmatic_function(C1);


    return 0;
}


