using namespace std;
#include<iostream>
#include<conio.h>

class Circle
{
    public:
            float Rad, Area;

            Circle()
            {
                cout << "\n Circle :: Def Const.";

                Rad = 0.0;
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
        Circle Obj1;

        getch();

        cout << "\n Radius " << Obj1.Rad << " \n Area = " << Obj1.Area << ".\n";

        getch();

        Obj1.Rad = 2.5;
        Obj1.Area_Of_Circle();
        getch();

        cout << "\n Area Of Circle with Radius " << Obj1.Rad << " is = " << Obj1.Area << ".\n";

        getch();
        return 0;
}
