using namespace std;
#include<iostream>
#include<conio.h>

/// Class Calc Prototype or Declaration

class Calc
{
    private :
            int N1, N2;                                     /// Private Data Member Declaration

            void Addition();                                /// Private Member Function Declaration
            void Subtraction();

    public :
            int Sum, Sub;                                    /// Public Data Member Declaration

            Calc();                                          /// Default Constructor Declaration

            Calc(int No1, int No2);                          /// Parameterized Constructor Declaration

            Calc(Calc &Ref);                                 /// Copy Constructor Declaration

            ~Calc();                                         /// Destructor Declaration

};

int main()
{
        Calc Obj1;                      /// Object Created with Default Constructor

        Calc Obj2(51, 21);              /// Object Created with Parameterized Constructor

        Calc Obj3(Obj2);                /// Object Created With Copy Constructor

        cout << "\n Addition for Obj3    => " << Obj3.Sum << endl;
        cout << "\n Subtraction for Obj3 => " << Obj3.Sub << endl;

        getch();

        Obj3.Set_Values();

        cout << "\n Addition for Obj3    => " << Obj3.Sum << endl;
        cout << "\n Subtraction for Obj3 => " << Obj3.Sub << endl;

        getch();

        ///Obj3.Addition();
        ///Obj3.Subtraction();
        Obj3.Calculate();

        cout << "\n Addition for Obj3    => " << Obj3.Sum << endl;
        cout << "\n Subtraction for Obj3 => " << Obj3.Sub << endl;

        cout << "\n Back in Main() \n Thanks FRIENDS !!!" << endl;

        getch();
        return 0;
}

/// Class Calc  :: Constructors, Destructor, Member Function Definitions

void Calc :: Addition()
{
    cout << " \n Inside Private Member Function Addition " << endl;
    Sum = N1 + N2;
    getch();
}

void Calc :: Subtraction()
{
    cout << " \n Inside Private Member Function Subtraction " << endl;
    Sub = N1 - N2;
    getch();
}

Calc :: Calc()                                           /// Default Constructor Definition
{
    N1 = N2 = Sum = Sub = 0;

    cout << "\n Inside Default Constructor!!!" << endl;
}

Calc :: Calc(int No1, int No2)                          /// Parameterized Constructor Definition
{
    N1 = No1;
    N2 = No2;
    Sum = Sub = 0;

    cout << "\n Inside Parameterized Constructor!!!" << endl;
}

Calc :: Calc(Calc &Ref)                                  /// Copy Constructor Definition
{
    this->N1  = Ref.N1;
    this->N2  = Ref.N2;

    this->Sum = 0;
    this->Sub = 0;

    cout << "\n Inside Copy Constructor!!!" << endl;
}

Calc :: ~Calc()                                          /// Destructor Definition
{
    cout << " \n Inside Destructor " << Sub << endl;
}

void Calc :: Set_Values()                               /// Public Member Function 1 Definition
{
    cout << "\n Enter 2 Numbers = ";
    cin >> N1 >> N2;
}

void Calc :: Calculate()                                /// Public Member Function 2 Definition
{
    cout << " \n Inside Public Member Function Calculate " << endl;
    getch();

    Addition();
    Subtraction();
}
