#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
using namespace std;

#define  Count  5

class  Product
{
            private:
                            int P_ID;
                            char P_Name[20];
                            float  P_P_Price;
                            float  P_S_Price;
                            int  C_Stock_Value;
                            static int P_Cnt ;

                            void Update_Product_Details();
                            void  Display_Single_Product();

            public:
                            Product();
                            Product(char[] , float , float , int );

                            ~Product();

                            void Accept_Product_Details();

                            friend void  Display_All_Products();
                            friend int Count_No_Of_Products();
                            friend void  Search_Product_By_ID(int);
                            friend void  Display_Product_By_ID(int);
                            friend int  Update_Product(int);
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
                            cout<< "\n No Product Available with ID "<< ID<< endl;
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
                            cout<< "\n No Product Available with ID "<< ID<< endl;
                }
                else
                {
                            cout<<"\n Information Of Product With Given ID is as Follows => "<<endl;
                            Obj[ID - 1].Display_Single_Product();
                }
}

void Product :: Update_Product_Details()
{
            int Choice = 0, New_Stock_Val = 0;

            cout<< "\n We are Updating Details of Product With ID => "<< this->P_ID;

            Up:
            cout<<"\n==========================**********==========================\n";
            cout<< "\n What Do you wish to Update??\n\t 1. Purchase Price\n\t 2. Sales Price\n\t 3. Current Stock\n\t 4. Exit\n";
            cout<<"\n==========================**********==========================\n";

            cout << "\n Enter Choice = ";
            cin >> Choice;

            switch(Choice)
            {
                        case 1:
                                        cout << "\n Enter New Purchase Price for Product ID "<<this->P_ID <<" ";
                                        cin>>this->P_P_Price;
                                        goto Up;
                        case 2:
                                        cout << "\n Enter New Sales Price for Product ID "<<this->P_ID <<" ";
                                        cin>>this->P_S_Price;
                                        goto Up;
                        case 3:
                                        cout << "\n Enter New Stock Added for Product ID "<<this->P_ID <<" ";
                                        cin>>New_Stock_Val;

                                        this->C_Stock_Value += New_Stock_Val;
                                        goto Up;
                        case 4:
                                        goto Down;
                        default:
                                        cout<< "\n Invalid Choice ??"<<endl;
                                        goto Up;
            }

            Down:
                    cout<< "\n Details Updated Successfully !!!"<<endl;
                    cout<<"\n Press Any Key Go Back"<<endl;
                    getch();
}

int  Update_Product(int ID)
{
                if(ID > Product :: P_Cnt )
                {
                            cout<< "\n No Product Available with ID "<< ID<< endl;
                }
                else
                {
                            Obj[ID-1].Update_Product_Details();
                }
}

void Display_All_Products()
{
                int i = 0;

                if(Product :: P_Cnt <= 0 )
                {
                            cout<< "\n No Products Added Yet!!!"<< endl;
                }
                else
                {
                            for(i = 0; i < Count; i++)
                            {
                                        Obj[i].Display_Single_Product();
                            }
                }
}

int main()
{
                int Choice = 0, i = 0, ID = 0;
                char ch = '\0';

                for(i = 0; i < Count; i++)
                {
                            Obj[i].Accept_Product_Details();
                }

                while(1)
                {
                                fflush(stdin);
                                cout<<"\n==================================*******************=================================="<<endl;
                                cout<<"\n Select Your Choice => \n\t 1. Search Product By ID \n\t 2. Update Product By ID \n\t 3. Display Product By ID \n\t 4. Display All Products \n\t 5. Count_No_Of_Products \n\t 6. EXIT"<<endl;
                                cout<<"\n==================================*******************=================================="<<endl;

                                cout<<"\n Enter Your Choice = ";
                                cin>>Choice;

                                cout<<"\n==================================*******************=================================="<<endl;

                                switch(Choice)
                                {
                                            case 1 :
                                                            cout<<"\n Enter Product ID To be Searched = ";
                                                            cin>>ID;

                                                            Search_Product_By_ID(ID);
                                                            cout<<"\n Press Any Key To Go Back To Main Menu"<<endl;
                                                            getch();
                                                            system("cls");
                                                            break;

                                            case 2 :
                                                            cout<<"\n Enter Product ID To be Updated = ";
                                                            cin>>ID;

                                                            Update_Product(ID);
                                                            cout<<"\n Press Any Key To Go Back To Main Menu"<<endl;
                                                            getch();
                                                            system("cls");
                                                            break;

                                            case 3 :
                                                            cout<<"\n Enter Product ID whose Details to be Displayed = ";
                                                            cin>>ID;

                                                            Display_Product_By_ID(ID);
                                                            cout<<"\n Press Any Key To Go Back To Main Menu"<<endl;
                                                            getch();
                                                            system("cls");
                                                            break;

                                            case 4 :
                                                            Display_All_Products();
                                                            cout<<"\n Press Any Key To Go Back To Main Menu"<<endl;
                                                            getch();
                                                            system("cls");
                                                            break;

                                            case 5 :
                                                            cout<< "\n Number of Products Added = "<< Count_No_Of_Products() <<endl;
                                                            cout<<"\n Press Any Key To Go Back To Main Menu"<<endl;
                                                            getch();
                                                            system("cls");
                                                            break;

                                            case 6 :
                                                        fflush(stdin);
                                                        cout<<"\n Are You Sure ???\n Do You Really Want To Quit (Yes/No) : ";
                                                        ch = getchar();

                                                        if(ch == 'N' || ch == 'n')
                                                        {
                                                                Choice = -1;
                                                                cout<<"\n Press Any Key To Go Back To Main Menu";
                                                                getch();
                                                                system("cls");
                                                        }
                                                        break;

                                            default :
                                                            cout<<"\n Invalid Choice Please Select Choice Wisely!!";
                                                            cout<<"\n Press Any Key To Go Back To Main Menu";
                                                            getch();
                                                            system("cls");
                                                            break;
                                }

                                if(Choice == 6 )
                                {
                                        cout<<"\n Thanks For Using Our Application!!!"<<endl;
                                        break;
                                }
                }

                cout<<"\n We are Pleased To Serve You \n TaTa Bye Bye!!! "<<endl;

                getch();
                return 0;
}
