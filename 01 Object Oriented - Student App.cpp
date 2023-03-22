using namespace std;
#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<string.h>
int RNum = 101;

class Stud
{
        public :
                    int  R_No, Phy, Chem, Maths;

                    char Name[20];

                    Stud();

                    Stud(int P, int C, int M, char Nm[]);

                    Stud(Stud &);

                    void Accept_Student_Details();

                    void Display_Student_Details();

                    ~Stud();

        private :
                    int Tot;
                    float Per;
                    void Calculate_Result();
};

Stud :: Stud()
{
                cout << endl << "\n Inside Default Constructor !!!" << endl;

                R_No = RNum;
                RNum++;

                Phy = Chem = Maths = Tot = 0;
                Per = 0.0;
}

Stud :: Stud(int P, int C, int M, char Nm[])
{
                cout << endl << "\n Inside Parameterized Constructor !!!" << endl;

                R_No = RNum;
                RNum++;

                Phy = P; Chem = C; Maths = M;
                strcpy(Name, Nm);

                Calculate_Result();
}

Stud :: Stud(Stud &RefObj)
{
                cout << endl << "\n Inside Copy Constructor !!!" << endl;

                R_No = RNum;
                RNum++;

                Phy = RefObj.Phy;
                Chem = RefObj.Chem;
                Maths = RefObj.Maths;
                Tot = RefObj.Tot;
                Per = RefObj.Per;

                strcpy(Name, RefObj.Name);
}

void  Stud :: Accept_Student_Details()
{
                cout << "\n\n Enter Student Details => ";

                fflush(stdin);
                cout << "\n\t Enter Name = ";
                gets(Name);
                cout << "\n\t Enter Physics Marks = ";
                cin >> Phy;
                cout << "\n\t Enter Chemistry Marks = ";
                cin >> Chem;
                cout << "\n\t Enter Maths Marks = ";
                cin >> Maths;

                Calculate_Result();
}

void Stud :: Display_Student_Details()
{
                cout << "\n\n ==============*****=============== \n";
                cout << "\n Details Of Students Are => ";

                cout << "\n\n\t Roll Number   = " << R_No;
                cout << "\n\t Student Name    = " << Name;
                cout << "\n\t Physics Marks   = " << Phy;
                cout << "\n\t Chemistry Marks = " << Chem;
                cout << "\n\t Maths Marks     = " << Maths;
                cout << "\n\t Total Marks     = " << Tot;
                cout << "\n\t Percentage      = " << Per;

                cout << "\n\n ==============*****=============== \n";
}

void Stud :: Calculate_Result()
{
            Tot = Phy + Chem + Maths;

            Per = ((float)(Tot)) / 3;
}

Stud :: ~Stud()
{
                cout<<endl<<" Inside Destructor of Our Stud Class!!!"<< Per << endl;
}

int main()
{
                int P = 0, C = 0, M = 0;
                char Nm[40] = "";

                Stud Std1;

                Std1.Accept_Student_Details();

                cout<< "\n Enter Physics Marks = ";
                cin>>P;

                cout<< "\n Enter Chemistry Marks = ";
                cin>>C;

                cout<< "\n Enter Maths Marks = ";
                cin>>M;

                cout<< "\n Enter Name = ";
                cin>>Nm;

                Stud Std2(P, C, M, Nm);

                getch();

                Std1.Display_Student_Details();
                Std2.Display_Student_Details();

                getch();

                Stud Std3(Std2);

                Std3.Display_Student_Details();
                getch();
                return 0;
}
