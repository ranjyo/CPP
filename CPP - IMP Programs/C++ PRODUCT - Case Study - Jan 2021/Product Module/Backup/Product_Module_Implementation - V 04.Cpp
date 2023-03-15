#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
using namespace std;
#define  Count  3

class  Product
{
            private:
                            int P_ID;
                            char P_Name[20];
                            float  P_P_Price;
                            float  P_S_Price;
                            int  C_Stock_Value;
                            static int P_Cnt ;

            public:
                            Product();
                            Product(char[] , float , float , int );

                            ~Product();

                            void Accept_Product_Details();
                            void  Display_Single_Product();
                            friend int Count_No_Of_Products();
                            friend void  Search_Product_By_ID(int ID);
                            friend void  Display_Product_By_ID(int ID);
            /*
                            void Update_Product_Details(int ID);

            */
}Obj[Count];

int  Product :: P_Cnt = 0;

Product :: Product()
{
            this ->P_ID = ++P_Cnt;

            strcpy(this->P_Name, "");
            this->P_P_Price = 0.0f;
            this->P_S_Price = 0.0f;
            this->C_Stock_Value = 0;

            cout<<"\n Product with ID "<<this->P_ID<<" Created Successfully by Default Constructor"<<endl;
}

Product :: Product(char Name[], float P_Price, float S_Price, int Stock)
{
            this ->P_ID = ++P_Cnt;

            strcpy(this->P_Name, Name);
            this->P_P_Price = P_Price;
            this->P_S_Price = S_Price;
            this->C_Stock_Value = Stock;

            cout<<"\n Product with ID "<<this->P_ID<<" Created Successfully by Parameterized Constructor"<<endl;
}

Product :: ~Product()
{
            cout<<"\n Product with ID " << this->P_ID <<" Destroyed Successfully"<<endl;
}

void Product :: Accept_Product_Details()
{
            cout<<"\n Enter Details for Product ID => "<<this->P_ID<<endl;

            cout<<"\n Enter Product Name = ";
            cin>>this->P_Name;
            cout<<"\n Enter Product Purchase Price = ";
            cin>>this->P_P_Price;
            cout<<"\n Enter Product Sales Price = ";
            cin>>this->P_S_Price;
            cout<<"\n Enter Product Current Stock = ";
            cin>>this->C_Stock_Value;
}

void Product ::  Display_Single_Product()
{
            cout<<"\n =======================************========================="<<endl;
            cout<<"\n Details of Product ID => "<<this->P_ID<<endl;

            cout<<"\n Enter Product Name = "<<this->P_Name<<endl;
            cout<<"\n Enter Product Purchase Price = "<<this->P_P_Price<<endl;
            cout<<"\n Enter Product Sales Price = "<<this->P_S_Price<<endl;
            cout<<"\n Enter Product Current Stock = "<<this->C_Stock_Value<<endl;
            cout<<"\n =======================************========================="<<endl;
}

int Count_No_Of_Products()
{
                return  Product :: P_Cnt;
}

void Search_Product_By_ID(int ID)
{
                if(ID > Product :: P_Cnt )
                {
                            cout<< "\n No Product Available with ID"<< ID<< endl;
                }
                else
                {
                            cout<<"\n Information Of  Searched Product With Given ID is as Follows => "<<endl;
                            Obj[ID - 1].Display_Single_Product();
                }
}

void Display_Product_By_ID(int ID)
{
                if(ID > Product :: P_Cnt )
                {
                            cout<< "\n No Product Available with ID"<< ID<< endl;
                }
                else
                {
                            cout<<"\n Information Of Product With Given ID is as Follows => "<<endl;
                            Obj[ID - 1].Display_Single_Product();
                }
}

int main()
{
            int i = 0;

            for(i = 0; i < Count; i++)
            {
                        Obj[i].Accept_Product_Details();
            }

            getche();
            system("cls");

            for(i = 0; i < Count; i++)
            {
                        Obj[i].Display_Single_Product();
            }

            cout<< "\n Number of Products Added = "<< Count_No_Of_Products() <<endl;

            Search_Product_By_ID(5);
            getch();

            Search_Product_By_ID(2);

            getch();
            system("cls");

            Display_Product_By_ID(11);

            getch();
            Display_Product_By_ID(1);

            getch();
            return 0;
}
