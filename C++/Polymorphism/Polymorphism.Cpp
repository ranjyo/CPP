#include<iostream>
#include<conio.h>
using namespace std;

class  Category
{
            public :
                            int Cat_ID;

                            Category()
                            {
                                            this->Cat_ID = 100;
                                            cout<<"\n Inside Category Constructor"<<endl;
                            }

                            ~Category()
                            {
                                            cout<<"\n Inside Category Destructor"<<endl;
                            }

                            void  Display(int Num)
                            {
                                    cout<<"\n Inside Base Class Display 1st Function "<< Num;
                            }

                            void Display(int N1, int N2)            // Overloaded Display Function
                            {
                                    cout<<"\n Inside Base Class Display 2nd Function "<< N1<< "\t"<<N2;
                            }

                            void Accept()
                            {
                                    cout<<"\n Enter a Number : "<<endl;
                            }
};

class  Product : public  Category
{
                private:
                            int  P_ID;

                public :
                            int Cat_ID;             // Characteristics Redefinition

                             Product()
                            {
                                            this->P_ID = 0;
                                            this->Cat_ID = 21;
                                            cout<<"\n Inside Product Constructor"<<endl;
                            }

                            ~Product()
                            {
                                            cout<<"\n Inside Product Destructor"<<endl;
                            }

                            void  Display(int Num)              // Behavior Redefinition
                            {
                                    cout<<"\n Inside Derived Class Display Function "<< Num<<endl;
                            }
};

int main()
{
                Product Obj;

                cout<<Obj.Cat_ID<<endl;

                getch();
                cout<<Obj.Category::Cat_ID<<endl;

                Obj.Accept();

                Obj.Display(7);

                Obj.Category::Display(5);

                getch();
                return 0;
}
