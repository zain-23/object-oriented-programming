#include <iostream>

using namespace std;

// Base class
class Animal
{
public:
    void animalSound()
    {
        cout << "The animal makes a sound \n";
    }
};

class Dog : public Animal
{
public:
    void animalSound()
    {
        cout << "The dog says: bow wow \n";
    }
};

int main()
{
    Animal animal1;
    Dog dog1;
    animal1.animalSound();
    dog1.animalSound();
    return 0;
}