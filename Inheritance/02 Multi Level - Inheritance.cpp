#include <iostream>
#include<conio.h>
using namespace std;

class  A1                                                 /// Base Class
{
    public:
                int  a, b;

                A1()
                {
                            cout << "\n A1 :: Constructor..." << endl;
                }

                ~A1()
                {
                            cout << "\n A1 :: Destructor..." << endl;
                }

                void fun()
                {
                            cout << "\n A1 :: fun()..." << endl;
                }
};

class D1 : public  A1                                  /// Derived Class 1
{
    public:
                int  x, y;

                D1()
                {
                            cout << "\n D1 :: Constructor..." << endl;
                }

                ~D1()
                {
                            cout << "\n D1 :: Destructor..." << endl;
                }

                void gun()
                {
                            cout << "\n D1 :: gun()..." << endl;
                }
};

class D2 : public  D1                             // Derived Class 2
{
        public:
                int  l, m;

                D2()
                {
                            cout << "\n D2 :: Constructor..." << endl;
                }

                ~D2()
                {
                            cout << "\n D2 :: Destructor..." << endl;
                }

                void sun()
                {
                            cout << "\n D2 :: sun()..." << endl;
                }
};

// Main function for the program

int main( )
{
                D2   Obj;

                cout << endl <<sizeof(Obj)<< endl;

                _getch();
                return 0;
}
