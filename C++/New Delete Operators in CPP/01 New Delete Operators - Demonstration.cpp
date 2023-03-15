//  new Operators in C++ => Works for Dynamically Object Creation / Dynamic Memory Allocation  / Its Like malloc in C
//  delete Operators in C++ => Works for Deallocating Dynamically Allocated Memory (By new Operator) / Its Like Free in C

using namespace std;
#include<iostream>
#include<conio.h>
#include<stdio.h>

class  Fork
{
        public :
                    int  i , j, k;                                                                                                             // Public - Data Members or Characteristics

                    void  Fun()                                                                                                         // Public - Member Function or Behavior
                    {
                                cout << "\n Inside PUBLIC fun() function of our Class..."<<endl;

                                printf("\n Welcome to Have FUN");
                                i = k - 500;
                                j = i * 5;
                    }

                    Fork()                                                                                                                  // Default Constructor
                    {
                                i = 0;
                                j = 1;
                                k = 1000;

                                cout<< "\n Inside Default Constructor Of Our Class...";
                                cout<< "\n Values => \t" << i  << "  " << j << "  " <<  k <<endl;
                    }

                    Fork(int N1, int N2)                                                                                         // Parameterized Constructor
                    {
                                i = N1;
                                j = N2;
                                k = 1000;

                                cout<< "\n Inside Parameterized Constructor Of Our Class...";
                                cout<< "\n Values => \t"<< i << "  " << j << "  " <<  k <<endl;
                    }

                    ~Fork()                                                                                                             // Destructor
                    {
                                cout<< "\n Inside Destructor Of Our Class...";
                                cout<< "\n Values Inside Destructor of Current Object => \t"<< i << "  "<< j <<"  " <<  k <<endl<<endl;
                    }
};

int  main()
{
                    Fork  Obj1;                                                                           // Object Created Using Default Constructor

                    getch();
                    Obj1.Fun();

                    cout<<"\n Back To Main()...";
                    getch();

                    Fork  Obj2(15, 21);                                                             // Object Created Using Parameterized Constructor

                    getch();

                    Fork  *Obj3 = new Fork();

                    Obj3->Fun();

                    delete(Obj3);

                    cout<<"\nByeBye";

                    getch();
                    return 0;
}
