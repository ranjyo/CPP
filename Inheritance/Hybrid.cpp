#include <iostream>
#include<conio.h>
using namespace std;

class Base
{
    public:
        int a, b, c;

        Base()
        {
            a = 0; b = 0; c = 0;
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
};

class  A1                                                 /// Base Class 1
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

class  A2 : public Base                                         /// Base Class 2
{
            public:
                            int  x, y;

                            A2()
                            {
                                        cout << "\n A2 :: Constructor..." << endl;
                            }

                            ~A2()
                            {
                                        cout << "\n A2 :: Destructor..." << endl;
                            }

                            void gun()
                            {
                                        cout << "\n A2 :: gun()..." << endl;
                            }
};

class  A3                                              /// Base Class 3
{
            public:
                            int  p;

                            A3()
                            {
                                        cout << "\n A3 :: Constructor..." << endl;
                            }

                            ~A3()
                            {
                                        cout << "\n A3 :: Destructor..." << endl;
                            }

                            void Demo()
                            {
                                        cout << "\n A3 :: Demo()..." << endl;
                            }
};

class D1 : public  A2, A3, A1                          /// Derived Class
{
            public:
                            int  l, m;

                            D1()
                            {
                                        cout << "\n D1 :: Constructor..." << endl;
                            }

                            ~D1()
                            {
                                        cout << "\n D1 :: Destructor..." << endl;
                            }

                            void sun()
                            {
                                        cout << "\n D1 :: sun()..." << endl;
                            }
};

// Main function for the program

int main( )
{
                D1   Obj;

                cout << endl <<sizeof(Obj)<< endl;

                getch();
                return 0;
}
