using namespace std;
#include<iostream>
#include<conio.h>
#include<stdio.h>

class Calculator
{
        public :
                    int  No1, No2, Ans;                                                  /// Data Members or Characteristics or class variable

                    Calculator();                                                        /// Default Constructor of Our Class // Only Declaration

                    Calculator(int  N1, int  N2);                                        /// Parameterized Constructor of Our Class  // Only Declaration

                    void Add();                                                          /// Member Function Add or Behaviors Declaration

                    void Sub();                                                          /// Member Function Sub or Behaviors Declaration

                    ~Calculator();                                                       /// Destructor Of Our Class // Only Declaration
};

Calculator :: Calculator()                                                               /// Default  Constructor Definition Outside Class
{
                cout << endl << "\n Inside Default Constructor !!!" << endl;

                No1 = No2 = Ans = 0;
}

Calculator :: Calculator(int  N1, int  N2)                                               /// Parametrized Constructor Definition Outside Class
{
                cout << endl << "\n Inside Parameterized Constructor !!!" << endl;

                No1 = N1; No2 = N2; Ans = 0;
}

void  Calculator :: Add()                                                                /// Member Functions or Behaviors  Definition Outside Class
{
                Ans = No1 + No2;
}

void Calculator :: Sub()                                                                 /// Member Functions or Behaviors  Definition Outside Class
{
                Ans = No1 - No2;
}

Calculator :: ~Calculator()
{
                No1 = No2 = Ans = 0;
                cout<<endl<<" Inside Destructor of Our Calculator Class!!!"<< Ans << endl;
}

int main()
{
                Calculator  obj1;                                               ///  Obj1   is an Object Created Using Default Constructor of our Class

                cout << "\n Enter 1st Number = ";
                cin >> obj1.No1;
                cout << "\n Enter 2nd Number = ";
                cin >> obj1.No2;

                obj1.Add();

                cout << endl << "Addition of "<< obj1.No1 << " & " << obj1.No2 << " is = " << obj1.Ans << endl;

                getch();

                obj1.Sub();

                cout << endl << "Subtraction of "<< obj1.No1 << " & " << obj1.No2 << " is = " << obj1.Ans << endl;

                Calculator  obj2(100, 55);

                obj2.Add();

                cout << endl << "Addition of "<< obj2.No1 << " & " << obj2.No2 << " is = " << obj2.Ans << endl;

                getch();

                obj2.Sub();

                cout << endl << "Subtraction of "<< obj2.No1 << " & " << obj2.No2 << " is = " << obj2.Ans << endl;

                getch();
                return 0;
}
