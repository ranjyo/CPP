using namespace std;
#include<iostream>
#include<conio.h>

class Base1
{
    public :
            int a;

            Base1()
            {
                    cout << "\n Inside Base1 Constructor!!! \n";
            }

            ~Base1()
            {
                    cout << "\n Inside Base1 Destructor!!! \n";
            }
};

class Base2
{
    public :
            int b;

            Base2()
            {
                    cout << "\n Inside Base2 Constructor!!! \n";
            }

            ~Base2()
            {
                    cout << "\n Inside Base2 Destructor!!! \n";
            }
};

class Base3
{
    public :
            int c;

            Base3()
            {
                    cout << "\n Inside Base3 Constructor!!! \n";
            }

            ~Base3()
            {
                    cout << "\n Inside Base3 Destructor!!! \n";
            }
};

class Derived : public Base1, public Base3, public Base2
{
    public :
            int m;

            Derived()
            {
                    cout << "\n Inside Derived Constructor!!! \n";
            }

            ~Derived()
            {
                    cout << "\n Inside Derived Destructor!!! \n";
            }
};

int main()
{
    Derived dObj;

    cout<< "\n Size OF Derived = " <<  sizeof(dObj) << endl;   ///  16

    _getch();
    return 0;
}
