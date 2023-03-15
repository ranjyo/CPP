#include<iostream>
#include<conio.h>
using namespace std;

class  Category
{
            public :
                            Category()
                            {
                                            cout<<"\n Inside Category Constructor"<<endl;
                            }

                            ~Category()
                            {
                                            cout<<"\n Inside Category Destructor"<<endl;
                            }

                            virtual void  Display(int) = 0;             // Pure Virtual Function

                            void Accept()
                            {
                                    int  No = 0;

                                    cout<<"\n Enter a Number : ";
                                    cin>>No;
                            }
};

 void  Category :: Display(int cNum)
 {
                cout<<"\n Inside Partial Definition of Display Function by Base class Category"<<  cNum <<endl;
 }

class  Product : public  Category
{
                private:
                            int  P_ID;

                public :
                            int Cat_ID;

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

                            void  Display(int pNum)
                            {
                                            cout<<"\n Inside Derived Class Display Function "<< pNum<<endl;
                                            Category::Display(pNum);
                            }
};

int main()
{
                Product  pObj;

                pObj.Display(7);

                pObj.Accept();

                cout<<"\n Back To main()"<<endl;

                getch();
                return 0;
}
