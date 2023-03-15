#include<stdio.h>
#include<conio.h>

#define  Add(N1, N2)   N1 + N2

int main()
{
        int No1 = 0, No2 = 0, Sum = 0;

        printf("\n Enter 2 Numbers = ");
        scanf("%d%d", &No1, &No2);

        Sum = Add(No1,No2);

        printf("\n Addition of %d & %d is = %d.", No1, No2, Sum);

        getch();
        printf("\n\n Addition of 22  & 55 is = %d", Add(22, 55));

        getch();
        return 0;
}
