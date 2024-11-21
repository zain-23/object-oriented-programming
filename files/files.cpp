#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream Myfile("filename.txt");

    Myfile << "My name is zain and how are you";

    Myfile.close();
    return 0;
}