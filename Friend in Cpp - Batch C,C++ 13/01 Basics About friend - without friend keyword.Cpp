#include<iostream>
#include<conio.h>
using namespace std;

class Category
{
            private :
                            int Shop_ID;

                            void Accept()
                            {
                                    cout<<"\n Enter a Category ID : ";
                                    cin >> Cat_ID;
                            }
            protected :
                            int Cat_ID;
            public :
                            Category()
                            {
                                            this->Shop_ID = 100;
                                            this->Cat_ID = 1;
                                            cout<<"\n Inside Category Constructor" << endl;
                            }

                            ~Category()
                            {
                                            cout<<"\n Inside Category Destructor" << endl;
                            }

                            void Display(int Num)
                            {
                                    cout<< " Shop Id by Display Function is => " << Shop_ID << endl;
                                    cout<<"\n Inside Base Class Display Function "<< Num << endl;
                            }

};

void General_Customer()
{
                cout<<"\n Inside General Customer Function" << endl;
                getch();
                Category cObj;

                ///cout << " Category Id = " << cObj.Cat_ID << endl;     /// *NOT ALLOWED /// Protected Characteristic Access By Outsider of Class
                ///cout << " Shop Id = " << cObj.Shop_ID << endl;        /// *NOT ALLOWED /// Private Characteristic Access By Outsider of Class

                ///cObj.Accept();                                       /// *NOT ALLOWED /// Private Member Function Access By Outsider of Class
                cObj.Display(21);                                       /// public Member Function Access By Outsider of Class

                return;
}

int main()
{
                General_Customer();

                getch();

                cout<<"\n Back To Main Function" << endl;

                getch();
                return 0;
}
