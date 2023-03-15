using namespace std;
#include<iostream>
#include<conio.h>
#include<stdio.h>

class Circle
{
        public :
                float Rad;

                Circle()
                {
                        Rad = Area = Circum = 0;
                        PI = 3.14;

                        cout << "\n Inside Our Circle Class Default Constructor" << endl;
                }

                Circle(float R)
                {
                        Rad = R;
                        PI = 3.14;
                        Calculate_Area_And_Circum();

                        cout << "\n Inside Our Circle Class Parameterized Constructor" << endl;
                }

                ~Circle()
                {
                        cout << "\n Inside Our Circle Class Destructor - for Object With Radius = " << Rad;
                }

                void Calculate_Area_And_Circum()
                {
                        Area_Of_Circle();
                        Circumference_Of_Circle();
                }

                void Display_Details()
                {
                        cout << "\n Details Of Circle are => " << endl;

                        cout << "\n\t\t Radius                  = " << Rad;
                        cout << "\n\t\t Area Of Circle          = " << Area;
                        cout << "\n\t\t Circumference Of Circle = " << Circum;

                        cout << "\n\n ==================================== \n\n";
                }

        private :
                float PI, Area, Circum;

                void Area_Of_Circle()
                {
                        Area = PI * Rad * Rad;
                }

                void Circumference_Of_Circle()
                {
                        Circum = 2 * PI * Rad;
                }
};

int main()
{
                float R = 0.0;
                Circle Obj1;


                Obj1.Rad = 7;
                Obj1.Calculate_Area_And_Circum();

                Obj1.Display_Details();

                getch();

                cout<<"\n Enter Radious For New Object = ";
                cin >> R;

                Circle Obj2(R);

                Obj2.Display_Details();

                getch();
                return 0;
}
