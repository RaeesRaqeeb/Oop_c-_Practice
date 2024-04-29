#include<iostream>
#include<string>
using namespace std;
class iambase{

protected:
string basename;
public:
iambase(){
basename="iam private in base class";
}

};

class iamchild:private iambase {
public:
string childname = basename;

};

int main() {

iamchild c1;
iambase c2;
cout<<c1.childname;
cout<<c2.basename;
return 0;
}