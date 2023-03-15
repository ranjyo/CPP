// 03 Constructors Demonstration - Arithmatic Operators

using namespace std;
#include<iostream>
#include<conio.h>

class  Calculator
{
        public :
                    int  No1, No2, Res;                                                                                                     // Public - Data Members or Characteristics

                    void  Add()                                                                                                                 // Public - Member Function or Behavior
                    {
                                cout << "\n Inside PUBLIC Add() function of our Class..."<<endl;
                                Res = No1 + No2;
                    }

                    Calculator()                                                                                                            // Default Constructor
                    {
                                No1 = 0;
                                No2 = 0;
                                Res = 0;

                                cout<< "\n Inside Default Constructor Of Our Calculator Class...";
                    }

                    Calculator(int N1, int N2)                                                                            // Parameterized Constructor
                    {
                                No1 = N1;
                                No2 = N2;
                                Res = 0;

                                cout<< "\n Inside Parameterized Constructor Of Our Calculator Class...";
                    }

                    Calculator(Calculator  &Ref)
                    {
                                No1 = Ref.No1;
                                No2 = Ref.No2;
                                Res = Ref.Res;

                                cout<< "\n Inside Copy Constructor Of Our Calculator Class...";
                    }


                    ~Calculator()                                                                                                      // Destructor
                    {
                                cout<< "\n Inside Destructor Of Our Calculator Class... " << Res;
                    }
};

int  main()
{
                    Calculator  Obj1;                                                                           // Object Created Using Default Constructor

                    cout<<"\n Enter 2 Numbers for Addition = ";
                    cin >> Obj1.No1 >> Obj1.No2;

                    getch();

                    Obj1.Add();
                    cout << "\n Addition in Given Object is = "<< Obj1.Res;

                    cout<<"\n Back To Main()...";
                    getch();

                    Calculator  Obj2(15, 7);                                                             // Object Created Using Parameterized Constructor

                    Obj2.Add();
                    cout << "\n Addition in Given 2nd Object is = "<< Obj2.Res;

                    getch();
                    Calculator  MyObj(Obj2);                                                       // Object Created Using Copy Constructor

                    cout << "\n\n Value Of Res for New Object => " << MyObj.Res;        // 22

                    getch();
                    return 0;
}
