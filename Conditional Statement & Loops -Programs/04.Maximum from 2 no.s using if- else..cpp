#include<stdio.h>
#include<conio.h>
int main()
{
    int num1=0,num2=0;

    printf("\n Enter 2 Numbers =>");
    scanf("%d%d",&num1,&num2);

    if(num1>num2)
    {
        printf("\n Given Number1 is maximum");
    }
    else
    {
        printf("\n Given Number2 is maximum");
    }
    printf("\n\n Thank You......!");
    getch();
    return 0;
}
