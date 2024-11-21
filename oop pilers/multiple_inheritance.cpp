#include <iostream>

using namespace std;

// Base class
class MyClass
{
public:
    void myFunction()
    {
        cout << "Some content in parent class.";
    }
};

// Another base class
class MyOtherClass
{
public:
    void myOtherFunction()
    {
        cout << "Some content in another class.";
    }
};

class myChildClass : public MyClass, public MyOtherClass
{
};
int main()
{
    myChildClass obj1;
    // obj1.myOtherFunction();
    obj1.myFunction();
    return 0;
}