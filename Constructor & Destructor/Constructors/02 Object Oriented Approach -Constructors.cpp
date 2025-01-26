using namespace std;
#include<iostream>
#include<conio.h>
#include<stdio.h>

class Karad
{
		public :
				int No1;

				Karad()                                     /// Default Constructor
				{
						No1 = No2 = Ans = 0;

						Process();

						cout<<"\n Inside Def. Constructor!!! " << No1 << " " << No2 << " " << Ans << endl;
				}

				Karad( int N1, int N2 )                     /// Parameterized Constructor
				{
						No1 = N1;
						No2 = N2;
						Ans = 0;

						Process();

						cout<<"\n Inside Para. Constructor!!! "<< No1 << " " << No2 << " " << Ans << endl;
				}

				Karad(Karad &KObj)                          /// Copy Constructor
				{
                        No1 = KObj.No1;
                        No2 = KObj.No2;
                        Ans = KObj.Ans;

                        cout<<"\n Inside Copy Constructor!!! "<< No1 << " " << No2 << " " << Ans << endl;
				}

				~Karad()                                    /// Destructor
				{
						cout<<"\n Inside Destructor!!! "<< No1 << " " << No2 << " " << Ans;
				}

                void Accept()                               /// Public Member Function -- Accept
                {
                        cout << "\n Enter 1st Number : ";
                        cin >> No1;

                        cout << "\n Enter 2nd Number : ";
                        cin >> No2;

                        Process();
                }

                void Display()                              /// Public Member Function -- Display
                {
                        cout << "\n 1st Num = " << No1 << "\n 2nd Num = " << No2 << "\n Result = " << Ans << "." << endl;
                }

        private :
                int No2;

                void Process()                              /// Private Member Function -- Process
                {
                    cout << "\n Inside Private Process Function \n";
                    Ans = (No1 + No2) * 10;
                }

        protected :
                int Ans;
};

int main()
{
        Karad Obj1;                         /// Obj1 - Object Created by using Default Constructor
        Karad Obj2(50, 70);                 /// Obj2 - Object Created by using Parameterized Constructor

        Obj1.Accept();
        Obj1.Display();

        Obj2.Display();

        getch();

        Karad Obj3(Obj2);                   /// Obj3 - Object Created by using Copy Constructor	 --  Here Obj3 Copies All Characteristics of Obj2

        Obj3.Display();

        Karad Obj4;

        Obj4 = Obj1;

        getch();
        return 0;
}
