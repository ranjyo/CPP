using namespace std;
#include<iostream>
#include<conio.h>

class India
{
    public :
            int N1;
            float Per;

            static int N2;

            India()                                                 // Default Constructor
            {
                N1 = N2 = 0;
                Per = 100;

                cout << "\n Inside Default Constructor!!!" << endl;
            }

            India(int x)                                           // Parameterized Constructor
            {
                N1 = x;
                N2 = x;
                Per = 0.0;

                cout << "\n Inside Parameterized Constructor!!!" << endl;
            }

            void Modify()                                   // Member Function
            {
                    N1 = 55;
                    N2 = 21;
                    Per = 55.65;

                    cout << "\n Inside Member Function Modify()!!!" << endl;
            }

            static void Zero_Out()                                   // Member Function
            {
                    //N1 = 0;
                    N2 = 0;
                    //Per = 0.0;

                    cout << "\n Inside Member Function Zero_Out()!!!" << endl;
            }

            ~India()                                               // Destructor
            {
                cout << " \n Inside Destructor - " << N1 << endl;
            }
};

int India :: N2 = 50;

int main()
{
        cout << "\n Value of class variable = " << India :: N2 << endl;

        India::Zero_Out();

        cout << "\n New Value of class variable = " << India :: N2 << endl;

        India Obj1;

        cout << "\n Object Values => " << Obj1.N1 << " => " << Obj1.N2 << " => " << Obj1.Per << endl;

        Obj1.Modify();

        cout << "\n Object Values => " << Obj1.N1 << " => " << Obj1.N2 << " => " << Obj1.Per << endl;

        getch();

        India Obj2(78);

        cout << "\n Object Values 1 => " << Obj1.N1 << " => " << Obj1.N2 << " => " << Obj1.Per << endl;

        cout << "\n Object Values 2 =>  " << Obj2.N1 << " => " << Obj2.N2 << " => " << Obj2.Per << endl;

        India :: Zero_Out();

        static India Obj3;


        cout << "\n Object Values 3 => " << Obj3.N1 << " => " << Obj3.N2 << " => " << Obj3.Per << endl;

         _getch();
        return 0;
}
