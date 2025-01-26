using namespace std;
#include<iostream>
#include<conio.h>

class Base
{
    private :
            int a;

    public :
            int i;

            Base()
            {
                    cout << "\n Inside Base Constructor!!! \n";
            }

            ~Base()
            {
                    cout << "\n Inside Base Destructor!!! \n";
            }

    protected :
            int x;
};

class Derived : public Base
{
    private :
            int b;

    public :
            int j;

            Derived()
            {
                    cout << "\n Inside Derived Constructor!!! \n";
            }

            ~Derived()
            {
                    cout << "\n Inside Derived Destructor!!! \n";
            }

            void Fun()
            {
                    x = 15;
                    //a = 21;
                    i = 10;
                    b = 0;
                    j = 5;
                    z = 17;
            }

    protected :
            int z;
};

int main()
{
    Base bObj;

    cout<< "\n Size OF Base = " << sizeof(bObj);   /// 12

    Derived dObj;

    cout<< "\n Size OF Derived = " <<  sizeof(dObj);   /// 24

    _getch();
    return 0;
}
