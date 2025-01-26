#include<stdio.h>
#include<conio.h>

int Add(int N1, int N2)
{
    int  Ans = 0;
    Ans = N1 + N2;
    return Ans;
}

int Sub(int N1, int N2)
{
    int  Ans = 0;
    Ans = N1 - N2;
    return Ans;
}

int main()
{
    int Num1 = 0, Num2 = 0, Res = 0;

    printf("\n Enter 2 Numbers = ");
    scanf("%d%d", &Num1,&Num2);

    Res = Add(Num1, Num2);

    printf("\n Addition of %d & %d is = %d.", Num1, Num2, Res);

    Res = Sub(Num1, Num2);

    printf("\n Subtraction of %d & %d is = %d.", Num1, Num2, Res);

    getch();
    return 0;
}
