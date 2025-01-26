using namespace std;
#include<iostream>
#include<conio.h>

class Base
{
    private :
            int a;

    public :
            int b;

            Base()
            {
                    cout << "\n Inside Base Constructor!!! \n";
            }

            ~Base()
            {
                    cout << "\n Inside Base Destructor!!! \n";
            }

    protected :
            int c;
};

class Derived1 : public Base
{
    private :
            int p;

    public :
            int q;

            Derived1()
            {
                    cout << "\n Inside Derived1 Constructor!!! \n";
            }

            ~Derived1()
            {
                    cout << "\n Inside Derived1 Destructor!!! \n";
            }

    protected :
            int r;
};

class Derived2 : public Derived1
{
    private :
            int l;

    public :
            int m;

            Derived2()
            {
                    cout << "\n Inside Derived2 Constructor!!! \n";
            }

            ~Derived2()
            {
                    cout << "\n Inside Derived2 Destructor!!! \n";
            }

    protected :
            int n;
};

int main()
{
    Derived2 dObj2;

    cout<< "\n Size OF Derived2 = " <<  sizeof(dObj2);   ///

    _getch();
    return 0;
}



    /*


    Base bObj;

    cout<< "\n Size OF Base = " << sizeof(bObj);   /// 12

    Derived1 dObj1;

    cout<< "\n Size OF Derived = " <<  sizeof(dObj1);   /// 24

    */
