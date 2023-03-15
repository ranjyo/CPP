using namespace std;
#include<iostream>
#include<conio.h>

class  My_Friend;
class  Infosys;

class  Infosys
{
        public :
                    int  pub;

                    Infosys()
                    {
                                this->pub = 500;
                                this->pri = 600;
                                this->pro = 800;

                                cout<<endl<< "Inside Default Constructor"<<endl;
                    }

                    Infosys(int Num, int No)
                    {
                                this->pub = Num;
                                this->pri = No;
                                this->pro = 550;

                                cout<<endl<< "Inside Parameterized1 Constructor"<<endl;
                    }

                    Infosys(int No1, int No2, int No3)
                    {
                                this->pub = No1;
                                this->pri = No2;
                                this->pro = No3;

                                cout<<endl<< "Inside Parameterized2 Constructor"<<endl;
                    }

                    Infosys(Infosys &Obj)
                    {
                                this->pub = Obj.pub;
                                this->pri = Obj.pri;
                                this->pro = Obj.pro;
                                cout<<endl<< "Inside Copy Constructor"<<endl;
                    }

                    ~Infosys()
                    {
                                cout<<endl<< "Inside Destructor Of Infosys Class"<<endl;
                    }

                    int Final_Bill()
                    {
                                Calculate_Bill();

                                cout<<endl<< "Inside Public Member Function Final_Bill()"<<endl;

                                return pro;
                    }

                    void Display_Infosys();

        private :
                    int pri;

                    void Calculate_Bill()
                    {
                                 Bill_Desk();

                                cout<<endl<< "Inside Private Member Function Calculate_Bill()"<<endl;
                    }

        protected :
                    int pro;

                    void Bill_Desk()
                    {
                                pro = (pri * 2) + pub;

                                cout<<endl<< "Inside Protected Member Function Bill_Desk()"<<endl;
                    }
};

class  My_Friend
{
        friend void Infosys :: Display_Infosys();

        public :
                    int  i;

                    My_Friend()
                    {
                                this->i = 50;
                                this->j = 10;
                                this->k = 101;
                                cout<<endl<< "Inside Default Constructor of My Friend"<<endl;
                    }

                    My_Friend(int Num, int No)
                    {
                                this->i = Num;
                                this->k = No;
                                this->j = 101;

                                cout<<endl<< "Inside Parameterized1 Constructor"<<endl;
                    }

                    My_Friend(int No1, int No2, int No3)
                    {
                                this->i = No1;
                                this->k = No2;
                                this->j = No3;

                                cout<<endl<< "Inside Parameterized2 Constructor"<<endl;
                    }

                    My_Friend(My_Friend &Obj)
                    {
                                this->i = Obj.i;
                                cout<<endl<< "Inside Copy Constructor"<<endl;
                    }

                    ~My_Friend()
                    {
                                cout<<endl<< "Inside Destructor of My Friend"<<endl;
                    }

                    int Fun()
                    {
                                Gun();

                                cout<<endl<< "Inside Public Member Function Fun()"<<endl;

                                return k;
                    }

                    void Display()
                    {
                                cout<< endl<< "In Display Of My Friend Values of Characteristics "<<i <<"\t"<<j<<"\t"<<k;
                    }

        private :
                    int j;

                    void Gun()
                    {
                                 k = (j * i) + 100;

                                cout<<endl<< "Inside Private Member Function Gun()"<<endl;
                    }

        protected :
                    int k;

                    void Sun()
                    {
                                cout<<endl<< "Inside Protected Member Function Sun()"<<endl;
                    }
};

void Infosys :: Display_Infosys()
{
            cout<< endl<< "Values of Characteristics in Display_Infosys "<<pub <<"\t"<<pri <<"\t"<< pro;

            My_Friend Mf;

            Mf.j = 11;

            Mf.Gun();

            getche();

            Mf.Display();

            cout<<endl<<"Bye Bye " << endl<< "Press Any Key To go Back"<< endl;

            getch();
}

int main()
{
            Infosys  inf;

            inf.Display_Infosys();

            cout<<endl<< "BACK TO MAIN()"<<endl;

            getch();
            return 0;
}
