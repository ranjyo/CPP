using namespace std;
#include<iostream>
#include<conio.h>

class  Constructor_Demo
{
        public :
                    int  i , j, k;                                                                                                             // Public - Data Members or Characteristics

                    void  Fun()                                                                                                   // Public - Member Function or Behavior
                    {
                                cout << "\n Inside PUBLIC fun() function of our Class..."<<endl;
                                i = k - 500;
                                j = i * 5;
                    }

                    Constructor_Demo()                                                                                 // Default Constructor
                    {
                                i = 0;
                                j = 1;
                                k = 1000;

                                cout<< "\n Inside Default Constructor Of Our Class...";
                                cout<< "\n Values => \t"<< i  << "  "<< j <<"  " <<  k <<endl;
                    }

                    Constructor_Demo(int N1, int N2)                                                       // Parameterized Constructor
                    {
                                i = N1;
                                j = N2;
                                k = 1000;

                                cout<< "\n Inside Parameterized Constructor Of Our Class...";
                                cout<< "\n Values => \t"<< i << "  "<< j <<"  " <<  k<<endl;
                    }

                    ~Constructor_Demo()                                                                             // Destructor
                    {
                                cout<< "\n Inside Destructor Of Our Class...";
                                cout<< "\n Values Inside Destructor of Current Object => \t"<< i << "  "<< j <<"  " <<  k<<endl<<endl;
                    }
};

int  main()
{
                    Constructor_Demo  Obj1;                                                                           // Object Created Using Default Constructor

                    getch();
                    Obj1.Fun();

                    cout<<"\n Back To Main()...";
                    getch();

                    Constructor_Demo  Obj2(15, 21);                                                             // Object Created Using Parameterized Constructor

                    getch();
                    return 0;
}
