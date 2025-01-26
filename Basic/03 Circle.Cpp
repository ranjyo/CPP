using namespace std;
#include<iostream>
#include<conio.h>

class Circle
{
    public:
            float Rad, Area;

            Circle()
            {
                cout << "\n Circle :: Default Constructor";

                Rad = 0.0;
                Area = 0.0;
            }

            Circle(float R)
            {
                cout << "\n Circle :: Parameterized Constructor";

                Rad = R;
                Area = 0.0;
            }

            void Area_Of_Circle()
            {
                const float PI = 3.1416;

                Area = PI * Rad * Rad;

                cout << "\n Circle :: Area Of Circle...";
            }

            ~Circle()
            {
                cout << "\n Circle :: Destructor ";
                cout << Rad;
            }
};

int main()
{
        Circle Obj1;                  /// Object Created with Default Constructor

        getch();

        cout << "\n Radius " << Obj1.Rad << " \n Area = " << Obj1.Area << ".\n";

        getch();

        Obj1.Rad = 2.5;
        Obj1.Area_Of_Circle();
        getch();

        cout << "\n Area Of Circle with Radius " << Obj1.Rad << " is = " << Obj1.Area << ".\n";

        getch();

        Circle Obj2(5.52);            /// Object Created with Parameterized Constructor
        getch();

        cout << "\n Radius " << Obj2.Rad << " \n Area = " << Obj2.Area << ".\n";

        getch();

        Obj2.Area_Of_Circle();
        getch();

        cout << "\n Area Of Circle with Radius " << Obj2.Rad << " is = " << Obj2.Area << ".\n";

        getch();
        return 0;
}
