using namespace std;
#include<iostream>
#include<conio.h>

class  My_Constant
{
        public :
                    mutable int  i ;                                                                                  // Non-Constant Characteristics
                    int j;

                    My_Constant() : j(5)                                                                       // Default Constructor
                    {
                                    cout<< "\n Inside Default Constructor Of Our Class..."<<i<< "\t" <<j <<endl;
                    }

                    My_Constant(int Val) : j(Val)                                                          // Parameterized Constructor
                    {
                                    i = 50;
                                    cout<< "\n Inside Parameterized Constructor Of Our Class..."<<endl;
                    }

                    ~My_Constant()                                                                             // Destructor
                    {
                                    cout<< "\n Inside Destructor Of Our Class..."<<endl;
                    }
};

int  main()
{
                    const  My_Constant  Obj1;
                    My_Constant Obj2;

                    Obj1.i = 21;
                    //Obj1.j = 10;

                    Obj2.i = 50;
                    Obj2.j = 100;

                    getch();

                    cout<< "\n INSIDE main()!!!!!"<<endl;

                    cout<<"\n Values for 1st Object "<< Obj1.i <<"\t"<<Obj1.j<<endl;
                    cout<<"\n Values for 2nd Object "<< Obj2.i <<"\t"<<Obj2.j<<endl;

                    getch();
                    return 0;
}
