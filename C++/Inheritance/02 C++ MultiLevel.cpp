//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :
// Input 	     :
// Output 	     :
// Description   :
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

class Base
{
public:
            Base()
        {
            cout << "\n Base :: Constructor..." << endl;
        }

        ~Base()
        {
            cout << "\n Base :: Destructor..." << endl;
        }
    protected:
        int a, b;



        void fun()
        {
            cout << "\n Base :: fun()..." << endl;
        }
};

class Derived1 : public Base
{
    public:
        int x, y;

    Derived1()
    {
        cout << "\n Derived1 :: Constructor..." << endl;
    }

    ~Derived1()
    {
        cout << "\n Derived1 :: Destructor..." << endl;
    }

    void gun()
    {
        cout << "\n Derived1 :: gun()..." << endl;
    }
};

class Derived2 : public Derived1
{
    public:
        int x, y;

    Derived2()
    {
        cout << "\n Derived2 :: Constructor..." << endl;
    }

    ~Derived2()
    {
        cout << "\n Derived2 :: Destructor..." << endl;
    }

    void gun()
    {
        cout << "\n Derived2 :: gun()..." << endl;
    }
};

// Main function for the program
int main( )
{
    //Base bobj;
    //Derived1 dobj1;
    Derived2 dobj2;

    //cout << sizeof(bobj)<< endl;
    //cout << sizeof(dobj1)<< endl;
    cout << sizeof(dobj2)<< endl;

    //bobj.fun();

   // dobj1.gun();

   //dobj1.fun();

    dobj2.gun();

    return 0;
}











