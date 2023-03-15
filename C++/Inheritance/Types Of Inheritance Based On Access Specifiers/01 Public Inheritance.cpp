#include <iostream>
#include<conio.h>
using namespace std;

class Base
{
        public:
                                int a, b;

                                Base()
                                {
                                            a = b = i = j = k = l = 0;

                                            cout << "\n Base :: Constructor..." << endl;
                                }

                                ~Base()
                                {
                                            cout << "\n Base :: Destructor..." << endl;
                                }

        private :
                                int  i, j;

        protected :
                                int  k, l;
};

class Derived : public Base
{
        public:
                                int x;

                                Derived()
                                {
                                                x = y = z = 0;

                                                cout << "\n Derived :: Constructor..." << endl;

                                                Base :: a = 20;
                                                Base :: b = 30;
                                                ///Base :: i = 40;                  // Bcz Private Can't be Accessed by Outsider Class
                                                ///Base :: j = 50;                  // Bcz Private Can't be Accessed by Outsider Class
                                                Base :: k = 60;
                                                Base :: l = 70;
                                }

                                ~Derived()
                                {
                                                cout << "\n Derived :: Destructor..." << endl;
                                }

        private :
                                int  y;

        protected :
                                int  z;
};

int main( )
{
                Derived  dObj;

                dObj.a = 21;
                dObj.b = 51;

                ///dObj.i = 55;                  // Not Allowed - Bcz Private
                ///dObj.j = 60;                  // Not Allowed - Bcz Private

                ///dObj.k = 100;                  // Not Allowed - Bcz Protected
                ///dObj.l = 101;                  // Not Allowed - Bcz Protected

                dObj.x = 5;
                ///dObj.y = 10;                  // Not Allowed - Bcz Private
                ///dObj.z = 15;                  // Not Allowed - Bcz Protected

                cout << "\n Values => " << dObj.a << " " << dObj.b << " " << dObj.x << endl;

                cout << "\n Size Of Given Object = " << sizeof(dObj);                                  // 36 =>  As Size Of Object = Summation of Sizes of all Non Static characteristics of Base as well as derived
                                                                                                                                                                //          i.e   a, b, i, j ,k, l => Inside Base class 6 int Characteristics  = 6 *4 = 24 Bytes
                                                                                                                                                                //          And       x, y, z  => Inside Derived class 3 int Characteristics = 3 * 4 = 12 Bytes

                getch();
                return 0;
}
