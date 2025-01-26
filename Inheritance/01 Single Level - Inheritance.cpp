#include <iostream>
#include<conio.h>
using namespace std;

class  Karad                         // Base Class
{
    public:
            int  a, b;

            Karad()
            {
                        cout << "\n Karad :: Constructor..." << endl;
                        a=0;
                        b=0;
            }

            ~Karad()
            {
                        cout << "\n Karad :: Destructor..." << a << " " << b <<endl;
            }

            void fun()
            {
                        cout << "\n Karad :: fun()..." << endl;
            }
};

class Pune : public  Karad           // Derived Class
{
    public:
            int  x, y;

            Pune();
            ~Pune();

            void gun();
};

Pune :: Pune()
{
            cout << "\n Pune :: Constructor..." << endl;
}

Pune :: ~Pune()
{
            cout << "\n Pune :: Destructor..." <<x<< endl;
}

void Pune :: gun()
{
            cout << "\n Pune :: gun()..." << endl;
}

// Main function for the program

int main( )
{
            Karad  K1;

            K1.a = 51;

            getche();

            Pune  P1;
            getche();

            P1.a = 100;
            P1.x = 500;

            cout << endl <<sizeof(K1)<< endl;               // 8
            cout << endl <<sizeof(P1)<< endl;              //  16

            getch();
            return 0;
}
