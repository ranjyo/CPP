using namespace std;
#include<iostream>
#include<conio.h>

class
{
        public :
                    int  i , j;

                    static int Num;

                    void Fun()
                    {
                                cout<<"\n Inside Fun() of Our Unnamed Class..."<<endl;
                                cout<<"\n Value "<<this -> i;
                    }

}Obj;

// int ............ :: Num = 55;

int  main()
{
                    cout<<"\n Values for 1st Object "<< Obj.i <<"\t"<<Obj.j<<endl;

                    Obj.i = 21;
                    Obj.j = 10;

                    cout<< "\n INSIDE main()!!!!!"<<endl;

                    cout<<"\n Values for 1st Object "<< Obj.i <<"\t"<<Obj.j<<endl;

                    Obj.Fun();

                    getch();
                    return 0;
}
