#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
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

                            void  Display(int Num)
                            {
                                    cout<<"\n 1st Display "<< Num;
                            }

                            void  Display(float Num)
                            {
                                    cout<<"\n 2nd Display "<< Num;
                            }

}Obj;


int main()
{
                Obj.Display(5);

                getch();

                Obj.Display(6.33f);

                getch();
                return 0;
}
