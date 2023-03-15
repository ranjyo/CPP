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
        int a, b;

        Base()
        {
            cout << "\n Base :: Constructor..." << endl;
        }

        ~Base()
        {
            cout << "\n Base :: Destructor..." << endl;
        }

        void fun()
        {
            cout << "\n Base :: fun()..." << endl;
        }

        int Add(int iNo1, int iNo2)
        {
            return iNo1 + iNo2;
        }
};

class Derived : public Base
{
    public:
        int x, y;
        Derived();
        ~Derived();
        int myAdd(int, int, int);
        void gun();
};

// Main function for the program
int main( )
{
   int iRes = 0;
    Base bobj;
    Derived dobj;

    cout << sizeof(bobj)<< endl;
    cout << sizeof(dobj)<< endl;

    bobj.fun();
    iRes = bobj.Add(76,24);

    cout<< "\n Addition in Base ADD 76 + 24 : " << iRes << endl;

    iRes = dobj.Add(67,3);
    cout<< "\n Addition in Derived ADD 67 + 3 : " << iRes << endl;

    iRes = dobj.myAdd(76,24,50);
    cout<< "\n Addition in Derived MyADD 76 + 24 + 50 : " << iRes << endl;

    return 0;
}

Derived :: Derived()
{
    cout << "\n Derived :: Constructor..." << endl;
}

Derived :: ~Derived()
{
    cout << "\n Derived :: Destructor..." << endl;
}

int Derived :: myAdd(int iNum1, int iNum2, int iNum3)
{
    return Add(Add(iNum1,iNum2),iNum3);
}

void Derived :: gun()
{
    cout << "\n Derived :: gun()..." << endl;
}
