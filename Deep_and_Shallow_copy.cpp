#include<iostream>
#include<string>

using namespace std;


class Deep_and_shallow
{
    public:
        string name;
        int age;
        int *p;
        Deep_and_shallow()
        {
            p = new int(10);
            name="harshit";
            age=10;
        }
        Deep_and_shallow(const Deep_and_shallow &s1)
        {
            name = s1.name;
            age = s1.age;
            p =s1.p;
        }
        void shallow_copy(Deep_and_shallow &s1)
        {
            name = s1.name;
            age = s1.age;
            p = s1.p;
        }
        
        void display()
        {
            cout<<name<<endl;
            cout<<age<<endl;
            cout<<*p<<endl;
        }
        ~Deep_and_shallow()
        {
            delete p;
        }


};

int main(void)
{
    Deep_and_shallow s1;
    Deep_and_shallow s2(s1);
    cout<<"\nShallow copy or deep copy\n";
    s1.display();
    s2.display();

    s2.age=12;
    s2.name="raees";
    cout<<"\nShallow copy or deep copy\n";
    s1.display();
    s2.display();

    Deep_and_shallow s3 = s2;
    cout<<"\nShallow copy or deep copy\n";
    s3.display();
    s2.age=13;
    s2.name="khan";
    s1.display();
    s2.display();
    s3.display();
    return 0;
}

// #include<iostream>
// #include<string>

// using namespace std;

// class COPY{
//     public:
//     int age;
//     string name;

//     COPY(){
//         name="harshit";
//         age=10;
//     }

//     COPY(COPY &obj){
//         name = obj.name;
//         age = obj.age;
//     }

    

// };


// int main(void)
// {
//     COPY obj1();
//     COPY obj2=obj1;
    



// }