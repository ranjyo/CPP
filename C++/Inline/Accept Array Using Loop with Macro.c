#include"MyHeader.h"

int main()
{
    int Arr[Cnt] = {25};
    int i = 0;

    // Displaying Array Elements
    for(i = 0; i < Cnt; i++)
    {
        printf("\n Value of Amount %d = %d .",i+101,Arr[i]);
    }

    getch();

    system("cls");

    printf("\n Enter Array Elements => \n\n");

     // Accepting Array Elements
    for(i = 0; i < Cnt; i++)
    {
        printf("\n Enter Amount[%d] = ",i+101);
        scanf("%d",&Arr[i]);
    }

     // Displaying New Array Elements
    for(i = 0; i < Cnt; i++)
    {
        printf("\n Value of Amount %d = %d .",i+501,Arr[i]);
    }

    printf("\n\n Press any key to continue...");

    getch();
    return 0;
}
