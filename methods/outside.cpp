#include <iostream>
#include <string>

using namespace std;

class Car
{
public:
    void myMethod();
};

void Car::myMethod()
{
    cout << "Outside Method";
}

int main()
{
    Car obj1;
    obj1.myMethod();
    return 0;
}