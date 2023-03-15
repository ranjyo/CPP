#include<iostream>
#include<conio.h>
using namespace std;

class  Category
{
            public :
                            int N1 , N2;

                            Category()
                            {
                                            cout<<"\n Inside Category Constructor"<<endl;
                            }

                            ~Category()
                            {
                                            cout<<"\n Inside Category Destructor"<<endl;
                            }

                            void  Display(int Num)
                            {
                                    cout<<"\n Inside Base Class Display Function "<< Num;
                            }

                            void Accept()
                            {
                                    int  No = 0;

                                    cout<<"\n Enter a Number : ";
                                    cin>>No;
                            }
};

class  Product : public  Category
{
                private:
                            int  P_ID;
                            float Price;

                public :

                             Product()
                            {
                                            this->P_ID = 0;
                                            this->Price = 0.0;
                                            cout<<"\n Inside Product Constructor"<<endl;
                            }

                            ~Product()
                            {
                                            cout<<"\n Inside Product Destructor"<<endl;
                            }

                            void  Display(int Num)
                            {
                                    cout<<"\n Inside Derived Class Display Function "<< Num<<endl;
                            }

                            void  Calculate()
                            {
                                    cout<<"\n Calculation";
                            }
};

int main()
{
                Category  cObj;
                Product  pObj;

                Category  *cPtr = NULL;
                Product  *pPtr = NULL;

                cPtr = &cObj;                   // Allow

                cPtr = &pObj;                   // UpCasting

                //pPtr = &cObj;               // DownCasting   // Not Allowed

                pPtr = &pObj;                   // Allow

                cPtr->Display(5);

                getch();

                pObj.Display(8);
                cObj.Display(2);

                getch();

                return 0;
}
