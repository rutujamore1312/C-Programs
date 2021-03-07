 #include<stdio.h>
#include<conio.h>
int main()
{
    int num1=0,num2=0;
    up:

    printf("\n Enter 2 Numbers =>");
    scanf("%d%d",&num1,&num2);

    if(num1>num2)
    {
        printf("\n Given Number %d is maximum");
    }
    else
    {
        printf("\n Given Number %d is minimum");
        goto up;
    }

    printf("\n\n Thank You......!");
    getch();
    return 0;
}
