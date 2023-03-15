//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :
// Input 	     :
// Output 	     :
// Description   :
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
#include<conio.h>
using namespace std;

class Base1
{
    public:
        int a, b;

        Base1()
        {
            cout << "\n Base1 :: Constructor..." << endl;
        }

        ~Base1()
        {
            cout << "\n Base1 :: Destructor..." << endl;
        }

};

class Base2
{
    public:
        int a, b;

        Base2()
        {
            cout << "\n Base2 :: Constructor..." << endl;
        }

        ~Base2()
        {
            cout << "\n Base2 :: Destructor..." << endl;
        }

};

class Base3
{
    public:
        int a, b;

        Base3()
        {
            cout << "\n Base3 :: Constructor..." << endl;
        }

        ~Base3()
        {
            cout << "\n Base3 :: Destructor..." << endl;
        }

};

class Derived : public Base3, public Base1, public Base2
{
    public:
        int x, y;

    Derived()
    {
        cout << "\n Derived :: Constructor..." << endl;
    }

    ~Derived()
    {
        cout << "\n Derived :: Destructor..." << endl;
    }
};

// Main function for the program
int main( )
{
    Derived dobj;

    cout << sizeof(dobj)<< endl;

    _getch();
    return 0;
}
