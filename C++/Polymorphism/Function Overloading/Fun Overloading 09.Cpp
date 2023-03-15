#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;

class  Product
{
            private:
                            int P_ID;
            public:
                            Product()
                            {
                                            this->P_ID = 0;
                                            cout<<"\n Inside Constructor"<<endl;
                            }

                            ~Product()
                            {
                                            cout<<"\n Inside Destructor"<<endl;
                            }

                            void  Display(int Num)          // 1000
                            {
                                    cout<<"\n 1st Display "<< Num <<endl;
                            }

                            void  Display(double fNum)      //2000
                            {
                                    cout<<"\n 2nd Display "<< fNum <<endl;
                            }
}Obj;

int main()
{
                Obj.Display(5);

                Obj.Display('Q');

                Obj.Display(5.62f);

                Obj.Display(54.548);

                getch();
                return 0;
}
