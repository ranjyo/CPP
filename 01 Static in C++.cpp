using namespace std;
#include<iostream>
#include<conio.h>

int gNum = 21;

void Fun()
{
        int i = 50;
        static int j = 101;

        cout << "\n Value of Non Static Variable = " << i;    /// 50   50   50   50
        cout << "\n Value of Static Variable = " << j << endl; /// 101  102  103  104
        cout << "\n Value of Global Variable = " << gNum << endl; /// 21  22  24   25

        i++;
        j++;
        gNum++;

        return;
}

int main()
{
        Fun();
        Fun();

        gNum++;

        Fun();
        Fun();

        _getch();
        return 0;
}
