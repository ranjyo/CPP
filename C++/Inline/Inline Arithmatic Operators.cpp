// Inline - Arithmatic Operators

using namespace std;
#include<iostream>
#include<conio.h>

inline void Add(int N1, int N2)
{
            register int  Res = 0;

            Res = N1 + N2;

            cout << "\n Addition of "<< N1 <<" & " << N2 << " is = "<< Res;
}

int  main()
{
                    int  No1 = 0, No2 = 0;

                    cout << "\n  Enter 2 Numbers For Addition = ";
                    cin>> No1 >> No2;

                    Add(No1, No2);

                    getch();
                    return 0;
}
