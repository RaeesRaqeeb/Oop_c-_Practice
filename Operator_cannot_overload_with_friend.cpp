#include <iostream>

using namespace std;

class Subtractor {
private:
int value;

public:
Subtractor(int v) : value(v) {}

int operator[]( Subtractor other) {
return value - other.value;
}
};

int main() 
{

Subtractor j(5);
Subtractor k(3);
int result = j[k];
cout<<result;
return 0;
}