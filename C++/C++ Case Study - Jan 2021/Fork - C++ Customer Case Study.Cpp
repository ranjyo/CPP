#include<iostream>
#include<stdio.h>
#include<conio.h>
typedef unsigned int UINT;
using namespace std;

struct  Cust_Product_Purchase
{
            int Product_ID;
            char PName;
            float P_S_Price;
            int Qty;
            float Amount;
            Cust_Product_Purchase *Next;
};

class  Product
{
            private:
                            int P_ID;
                            char P_Name;
                            float  P_P_Price;
                            float  P_S_Price;
                            int  C_Stock_Value;

            public:
                            Product();
                            Product();
                            ~Product();

                            void Accept_Product_Details();
                            void Update_Product_Details(int ID);
                            void  Search_Product_By_ID(int ID);
                            int Count_No_Of_Products();
                            void View_All_Products();
};

class Customer
{
            private:
                            int  Cust_ID;
                            char  Name[40];
                            char  City[20];
                            UINT  Mob_No;
                            int No_Of_Prod;
                            Cust_Product_Purchase *Head;

            public:
                           Customer();
                           Customer();
                           Customer(Customer &Obj);

                           ~Customer();

                           void Accept_Customer_Details();
                           void Display_Single_Customer(int  C_Id);
                           void Search_Customer_By_ID(int  C_Id);
                           void Search_Customer_By_Name(char *Nm);
};

int main()
{

            getch();
            return 0;
}
