using namespace std;
#include<iostream>
#include<conio.h>
#define Pi 3.14

class Circle
{
    private :
            float Rad;                         /// Private Characteristic or Data Member of Class Circle

    public :
            float Area, Circum;                /// Public Characteristics or Data Members of Class Circle

            Circle();                          /// Default Constructor Declaration

            Circle(float);                     /// Parameterized Constructor Declaration

            Circle(Circle &);                  /// Copy Constructor Declaration

            ~Circle();                         /// Destructor Declaration

            void Accept_Radius();              /// Accept Radius Member Function

            void Area_Of_Circle();             /// Calculate Area_Of_Circle Member Function

            void Circumference_Of_Circle();    /// Calculate Circumference_Of_Circle Member Function
};

int main()
{
            Circle Obj1;
            Circle Obj2(7.5);

            Obj1.Accept_Radius();
            Obj1.Area_Of_Circle();
            Obj1.Circumference_Of_Circle();

            getch();

            Obj2.Area_Of_Circle();
            Obj2.Circumference_Of_Circle();

            getch();

            Circle Obj3(Obj1);

            Obj3.Accept_Radius();

            cout << "\n Area Of Circle for Copied Object = " << Obj3.Area;
            cout << "\n Circumference Of Circle for Copied Object = " << Obj3.Circum;

            getch();
            return 0;
}

void Calc()
{
    Circle Obj;

    Obj.Accept_Radius();
}

Circle :: Circle()
{
            Rad = Area = Circum = 0.0;

            cout << "\n Inside Default Constructor!!!" << endl;
}

Circle :: Circle(float R)
{
            Rad = R;
            Area = Circum = 0.0;

            cout << "\n Inside Parameterized Constructor!!!" << endl;
}

Circle :: Circle(Circle &Ref)
{
            this -> Rad = Ref.Rad;
            this -> Area = Ref.Area;
            this -> Circum = Ref.Circum;

            cout << "\n Inside Copy Constructor!!!" << endl;
}

Circle :: ~Circle()
{
            cout << "\n Inside Destructor for Circle with Radius -> " << this -> Rad << endl;
}

void Circle :: Accept_Radius()
{
                cout << "\n Enter Radius = ";
                cin >> this -> Rad;
}

void Circle :: Area_Of_Circle()
{
                Area = Pi * Rad * Rad;

                cout << "\n Area for given Circle Calculated by Function as => " << Area ;
}

void Circle :: Circumference_Of_Circle()
{
                Circum = 2 * Pi * Rad;

                cout << "\n Circumference for given Circle Calculated by Function as => " << this -> Circum ;
}
