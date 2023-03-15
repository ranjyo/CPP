using namespace std;
#include<iostream>
#include<conio.h>

class  My_Friend
{
        friend  void Demo();

        public :
                    int  i;

                    My_Friend()
                    {
                                this->i = 50;
                                this->j = 10;
                                this->k = 101;
                                cout<<endl<< "Inside Default Constructor"<<endl;
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
                                cout<<endl<< "Inside Destructor"<<endl;
                    }

                    int Fun()
                    {
                                Gun();

                                cout<<endl<< "Inside Public Member Function Fun()"<<endl;

                                return k;
                    }

                    void Display()
                    {
                                cout<< endl<< "Values of Characteristics "<<i <<"\t"<<j<<"\t"<<k;
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

void  Demo()
{
             cout<<endl<< "Inside Necked Function Demo()"<<endl;

            My_Friend  obj;

            obj.Gun();

            cout<<endl<< "Value Of Private Characteristics j of Obj is = "<< obj.j <<endl;

            cout<<endl<< "We are still in Demo() which is Outsider for class My_Friend..."<<endl;

            getch();

            cout<<endl<< "Bye Bye"<<endl;

}

int main()
{
            Demo();
            getch();

            cout<<endl<< "BACK TO MAIN()"<<endl;

            getch();

            My_Friend Obj;

            Obj.i = 55;

            cout<< "Fun Returned = "<< Obj.Fun();

            getch();

            Obj.Display();

            getch();
            return 0;
}
