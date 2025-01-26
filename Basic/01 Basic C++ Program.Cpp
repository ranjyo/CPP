using namespace std;
#include<iostream>
#include<conio.h>

class Stud
{
    private:
        char Name[40];
        long int MobNo;
        float Per;

    public:
        int RNo;

        void Set_Student_Details();
        void Get_Student_Details(int No);
};

int main()
{
        Stud Std1, Std2;

        getch();
        return 0;
}
