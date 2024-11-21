#include <iostream>

using namespace std;

/*
class MyClass { The class
  public:    Access specifier
  class member goes here
}
*/
// In the following example, we demonstrate the differences between public and private members:

class MyClass
{
public:
    int x;

private:
    int y;
};

// Note: By default, all members of a class are private if you don't specify an access specifier:
int main()
{
    MyClass obj1;
    obj1.x = 20;
}