using namespace std;
#include<iostream>
#include<conio.h>
#include<stdio.h>

class Karad
{
		public :
				int No1;

				Karad()
				{
						No1 = No2 = Ans = 0;

						Process();

						cout<<"\n Inside Def. Constructor!!! " << No1 << " " << No2 << " " << Ans << endl;
				}

				Karad( int N1, int N2 )
				{
						No1 = N1;
						No2 = N2;
						Ans = 0;

						Process();

						cout<<"\n Inside Para. Constructor!!! "<< No1 << " " << No2 << " " << Ans << endl;
				}

				~Karad()
				{
						cout<<"\n Inside Destructor!!! "<< No1 << " " << No2 << " " << Ans;
				}

                void Accept()
                {
                        cout << "\n Enter 1st Number : ";
                        cin >> No1;

                        cout << "\n Enter 2nd Number : ";
                        cin >> No2;

                        Process();
                }

                void Display()
                {
                        cout << "\n 1st Num = " << No1 << "\n 2nd Num = " << No2 << "\n Result = " << Ans << "." << endl;
                }

        private :
                int No2;

                void Process()
                {
                    cout << "\n Inside Private Process Function \n";
                    Ans = (No1 + No2) * 10;
                }

        protected :
                int Ans;
};

int main()
{
				Karad Obj1;

				Karad Obj2(50, 70);

                getch();

				Obj1.Accept();

				Obj1.Display();

				getch();

				Obj2.Display();

                Obj2.No1 = 25;

                getch();
                return 0;

}
