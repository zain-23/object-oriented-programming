#include <iostream>
#include <string>

using namespace std;

// Note: The constructor has the same name as the class, it is always public, and it does not have any return value.

class Car
{
public:
    Car()
    {
        cout << "Hello World";
    }
};

int main()
{
    Car obj1; // Create an object of MyClass (this will call the constructor)
    return 0;
}