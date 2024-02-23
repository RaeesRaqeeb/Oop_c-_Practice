//Code By:Tayra Raqeeb                       FAST nai Kaisa Deya such batana? DM me!
//It is a prototype of Library management system you can extend it as you like.
#include<iostream>
#include<string>

using namespace std;

class booktype{

    public:
    int ISBN, price, year_of_publication,num_of_book;
    string author,title;

    public:
    //Defualt Constructor
    booktype()
    {

    }
    //Parameterized Constructor
    booktype(int isbn, int price2, int Year_o_pub, int num_of_book2, string author2, string title2)
    {
        ISBN=isbn;
        price=price2;
        year_of_publication=Year_o_pub;
        num_of_book=num_of_book2;
        author=author2;
        title=title2;
    }
   //for Displaying the detail of the searched book by users
    void display()
    {
        cout<<"\nBook Title"<<title<<"\nAuthor name:"<<author<<"\nISBN:"<<ISBN<<"\nYear of publication:"<<year_of_publication<<"\nNumber of book:"<<num_of_book<<"\nPrice:"<<price;

    }
//Adding books to stock 
    void operations()
    {
        int User_input;
        cout<<"What you want to do:"<<endl;
        cout<<"1)Add book to stock"<<endl;
        cout<<"2)Borrow Book"<<endl;
        cin>>User_input;
        if(User_input==1)
        {
            cout<<"\n How many books you want to add:";
            cin>>User_input;
            num_of_book+=User_input;
        }
        else if(User_input==2)
        {
            cout<<"\nHOw many book you want to borrow :";
            cin>>User_input;
            num_of_book-=User_input;
        }
    }


};


int main(void)
{
    int ISBN, price, year_of_publication,num_of_book;
    string author,title;
    //Class and Array of Objects
    booktype books[100];
    
    
    int User_input;
    while(1)
    {
        User_input=0;
        cout<<"1)Add books\n2)Search books\n3)Quit\n";
        cin>>User_input;
        //Adding books
        if(User_input==1)
        {
        //Adding books
            for(int i=0;i<100;i++)
            {
                cout<<"\nBook title:";
                cin.ignore();
                getline(cin,books[i].title);
                cout<<"\nAuthor:";
                cin>>books[i].author;
                cout<<"Year of Publication:";
                cin>>books[i].year_of_publication;
                cout<<"ISBN number:";
                cin>>books[i].ISBN;
                cout<<"Price:";
                cin>>books[i].price;
                cout<<"\nNumber of Books:";
                cin>>books[i].num_of_book;
                cout<<"want to add another book.\n1)yes \n2)not\n";
                cin>>User_input;
                if(User_input==2)
                {
                    break;
                }
            }
        }
        //Search books
        else if(User_input==2)
        {
            cout<<"How you want to do search:\n1)ISBN \n2)Title\n";
            cin>>User_input;
            if(User_input==1)
            {
                int counter=0;
                cout<<"\nEnter the number of ISBN:";
                cin>>User_input;
                for(int i=0;i<100;++i)
                {
                    if(books[i].ISBN==User_input)
                    {
                        cout<<"\nFollowing is the detail of the Book:\n";
                        books[i].display();
                        books[i].operations();
                        counter+=1;
                        break;
                    }
                }
                if(counter==0)
                {
                    cout<<"\nThere is no such book exist\n";
                }
            }
            else if(User_input==2)
            {
                int counter=0;
                string User_input;
                cout<<"\nEnte Title of the book you want:";
                cin.ignore();
                getline(cin,User_input);
                for(int i=0;i<100;i++)
                {
                    if(books[i].title==User_input)
                    {
                        cout<<"\nDetails of the book:\n";
                        books[i].display();
                        books[i].operations();
                        break;
                        counter+=1;
                    }
                }
                if(counter==0)
                {
                    cout<<"\nThere is no such book exist\n";
                }
            }

        }
        //End of program
        else if(User_input==3)
    {
        break;
    }
}


}