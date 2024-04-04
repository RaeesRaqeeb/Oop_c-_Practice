// #include<iostream>
// #include<string>

// using namespace std;

// namespace myspace
// {

//     void display()
//     {
//         cout<<"hello world"<<endl;
//     }

//     namespace nested_one
//     {

//         void display2()
//         {
//             cout<<"hello world"<<endl;
//         }
//     }
// }

// int main(void)
// {

//     using namespace myspace;
//     display();
//     myspace::nested_one::display2();
   
//    string name="Raqeeb";

//    cout<<name.substr(0,3)<<endl;

//     return 0;
// }
// #include<iostream>
// #include<string>

// using namespace std;

// class my_class
// {
//     public:
//     int rol_rum;
//     string name;

//     my_class();
//     ~my_class();
//     void display();

// };

// my_class::my_class()
// {
//     rol_rum=10;
//     name="harshit";
// }
// my_class::~my_class()
// {
//     cout<<"Destructor"<<endl;
// }
// void my_class::display()
// {
//     cout<<"name: "<<name<<endl;
//     cout<<"rol rum: "<<rol_rum<<endl;
// }


// int main(void)
// {
//     my_class obj;
//     obj.display();
//     return 0;
// }

#include<iostream>
#include<string>
#include<ctime>

using namespace std;


class my_class
{
    public:
    int *rol_rum;
    string *name;
    static int num;

   

    my_class()
    {
        rol_rum=new int;
        name=new string;
        *rol_rum=10;
        *name="harshit";
    }

//SHallow copy and deep
    my_class(my_class &obj, bool deep = false)
    {
        if(deep)
        {   
            rol_rum=new int;
            name=new string;
            *rol_rum = *obj.rol_rum;
            *name = *obj.name;
        }
        else
        {
        rol_rum=obj.rol_rum;
        name=obj.name;
        }
    }

   

    ~my_class()
    {
        delete rol_rum;
        delete name;
    }
    void display()
    {
        cout<<"******************************"<<endl;
        cout<<"name: "<<*name<<endl;
        cout<<"rol rum: "<<*rol_rum<<endl;
        cout<<"*******************************"<<endl;
    }
};  

int my_class :: num = 0;
int main(void)
{
    srand(time(NULL));
    int n=rand()%10 +1;
    // my_class obj2;
    // my_class *obj1;
    // obj1 = new my_class;
    // obj1=&obj2;
    // my_class obj3;
    // obj3=*obj1;
    // obj3.display();
    // *obj2.name="New";
    // obj3.display();
    // obj2.display();
    // obj1->display();

    // my_class *obj4;
    // obj4=obj1;
    // obj4->display();
    // *obj4->name="Changed";
    // obj2.display();
    /*When we Have to do deep copy in case of pointer objects we have to take new object 
        but in case of shallow copy we have to take another pointer object to which we will assign a*/
    //SHallow copy
    my_class obj1;
        my_class obj2(obj1);
        obj1.display();
        *obj2.name="Changed";
        obj2.display();
        obj1.display();
        //Deep copy
        my_class obj3(obj1, true);
        obj3.display();
        cout<<"**************************"<<endl;
        cout<<"\nDEEP Copy"<<endl;
        *obj3.name="new";
        *obj1.name="RAqeeb";
        obj3.display();
        obj1.display();
        obj2.display();
    
}
