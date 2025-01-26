using namespace std;
#include<iostream>
#include<conio.h>

class  Constructor_Demo
{
        private :
                    int  x,  y;                                                                                                                      // Private Data Members or Characteristics

                    void  Sun()                                                                                                               // Private Member Function or Behavior
                    {
                                cout << "\n Inside PRIVATE Sun() function of our Class...";

                                cout<<"\n Values = " << x << " " << j << " " << a << endl;
                    }

        public :
                    int  i , j;                                                                                                                       // Public Data Members or Characteristics

                    Constructor_Demo()                                                                                              // Default Constructor
                    {
                                i = j = x = y = 0;
                                a = b = 1;

                                cout<< "\n Inside Default Constructor Of Our Class...";
                    }

                    Constructor_Demo(int  N1, int  N2, int N3)                                                   // Parameterized  Constructor
                    {
                                    x = y = N1;
                                    i = j = N2;
                                    a = b = N3;

                                    cout<< "\n Inside Parameterized Constructor Of Our Class...";
                    }

                    void  Fun()                                                                                                              // Public  Member Function or Behavior
                    {
                                cout << "\n Inside PUBLIC fun() function of our Class...";

                                cout<<"\n Values = " << y << " " << j << " " << b << endl;

                                Sun();
                                Gun();
                    }

                    ~Constructor_Demo()                                                                                       // Destructor
                    {
                                cout<< "\n Inside Destructor Of Our Class...";
                    }

        protected :
                    int  a , b;                                                                                                                    // Protected Data Members or Characteristics

                    void  Gun()                                                                                                              // Protected Member Function or Behavior
                    {
                                cout << "\n Inside PROTECTED Gun() function of our Class...";

                                cout<<"\n Values = " << x << " " << i << " " << a << endl;
                    }
};

int  main()
{
            Constructor_Demo  Obj1;                                          // Objects Created Using Default Constructor

            _getch();

            Obj1.Fun();
            //Obj1.Sun();                                                             // NOT ALLOWED : As Sun is PRIVATE member Function

            Constructor_Demo  Obj2(15, 21, 75);                 // Object Created Using Parameterized  Constructor

            Obj2.Fun();
            //Obj2.Gun();                                                             // NOT ALLOWED : As Sun is Protected member Function


            cout << endl<< Obj1.i;

            cout << endl << Obj2.j;

            //cout << endl<< Obj1.a;                                          // NOT ALLOWED : As  a  is Protected  Characteristics

            //cout << endl << Obj2.x;                                         // NOT ALLOWED : As  x  is Private  Characteristics

            _getch();
            return 0;
}
