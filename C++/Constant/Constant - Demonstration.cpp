using namespace std;
#include<iostream>
#include<conio.h>

const int  gNo = 101;                                                                                           // 1st Type of Constant

class  My_Constant
{
        public :
                    int  i , j;                                                                                                // Non-Constant Characteristics
                    const float Pi;                                                                                    // Constant Characteristics                 // 2nd Type of Constant
                    int &MyRef;

                    My_Constant() :  Pi(3.14),MyRef(j)                                               // Default Constructor
                    {
                                    cout<< "\n Inside Default Constructor Of Our Class...";
                    }

                    My_Constant(int  Num, float Val) : Pi(Val), i(Num),MyRef(j)
                    {
                                    j = 50;
                                    i = 101;
                                    cout<< "\n Inside Parameterized Constructor Of Our Class...";
                    }

                    const void  Fun()                                                                            // 3rd Type of Constant
                    {
                                    cout << "\n Inside PUBLIC fun() function of our Class...";

                                    i  = 15;
                                    j = 20;
                    }

                    float  Area_Of_Circle(int Rad)
                    {
                                float Area = 0.0;

                                Area = Pi * Rad * Rad;

                                return Area;
                    }

                    ~My_Constant()                                                                             // Destructor
                    {
                                    cout<< "\n Inside Destructor Of Our Class...";
                    }
};

int  main()
{
                    const  int  Num = 51;                                                                   // 1st Type of Constant

                    const int &Ref = Num;

                    My_Constant  Obj1;
                    const My_Constant Obj2;                                                           // 4th Type of Constant

                    My_Constant  Obj3(21, 3.1416);

                    cout<< "\n INSIDE main()!!!!!";

                    Obj1.Fun();

                    cout << "\n\n Values Of Public Characteristics Of Obj1 => \n I = " << Obj1.i << " J = " << Obj1.j ;

                    cout<< "\n Area Of Circle with Radius 5 = " << Obj1.Area_Of_Circle(5);

                    getch();
                    return 0;
}
