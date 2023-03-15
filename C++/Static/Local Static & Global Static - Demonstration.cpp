using namespace std;
#include<iostream>
#include<conio.h>
void Fun();

static int  gNo = 101;                                                                                           // 1st Type of static

int  main()
{
                    Fun();
                    getch();

                    cout<<endl<<"\n Back to main()"<<endl;

                    Fun();
                    getch();

                    cout<<endl<<"\n Back to main()"<<endl;

                    Fun();
                    getch();

                    return 0;
}

void  Fun()
{
             static  int  Num = 51;                                                                   // 1st Type of static
             int No = 21;

             No++;
             Num++;

             cout<<"\n Value of Local Static Variable is = "<< Num;
             cout<<"\n Value of Local Non-Static Variable is = "<< No;

             return;
}
