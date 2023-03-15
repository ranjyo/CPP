using namespace std;
#include<iostream>
#include<conio.h>
int New_Acc_No = 101;

class Bank
{
        private :
                int Acc_Status;
        public :
                int Acc_No;
                char Name[80];
                double Balance;
                long long int MobNo;
                unsigned long int AdhaarNo;

                Bank();
                Bank(int);
                Bank(Bank &);

                int Create_Cust_Account();
                int Credit_Amount(int);
                int Debit_Amount(int);
                void Show_Cust_List();
                void Search_Cust_By_Acc_No(int);

                ~Bank();
};

int  main()
{


                getch();
                return 0;
}
