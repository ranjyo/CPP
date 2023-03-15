#include<iostream>
#include<conio.h>
using namespace std;

class  Category
{
            public :
                            int Cat_ID;

                            Category()
                            {
                                            Cat_ID = 0;
                                            cout<<"\n Inside Category Constructor"<<endl;
                            }

                            ~Category()
                            {
                                            cout<<"\n Inside Category Destructor"<<endl;
                            }

                            void  Display(int Num)
                            {
                                    cout<<"\n Inside Base Class Display Function : "<< Num;
                                    cout<<"\n Value : "<<Cat_ID;
                            }

                            void Accept()
                            {
                                    cout<<"\n Enter a Number : ";
                                    cin>>Cat_ID;
                            }
};

int main()
{
                Category Obj;
                Category *cPtr = NULL;

                cPtr = &Obj;

                cPtr ->Accept();
                cPtr ->Display(7);

                getch();
                return 0;
}
