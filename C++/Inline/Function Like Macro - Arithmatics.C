// Function Like Macro in C - Arithmatic  Operators

#include<stdio.h>
#include<conio.h>

#define  Add(N1, N2)   N1 + N2
#define  Mod(N1, N2)   N1 % N2
#define  Div(N1, N2)   N1 / N2

int main()
{
        int No1 = 0, No2 = 0, Sum = 0;

        printf("\n Enter 2 Numbers = ");
        scanf("%d%d", &No1, &No2);

        Sum = Add(No1,No2);

        printf("\n Addition of %d & %d is = %d.", No1, No2, Sum);

        getch();
        printf("\n\n Remainder of 71 Divided By 7 is = %d", Mod(71, 7));

        getch();
        printf("\n\n Division of 71 Divided By 7 is = %d", Div(71, 7));

        getch();
        return 0;
}
