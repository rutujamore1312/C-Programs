#include<stdio.h>
#include<conio.h>
int main()
{
    int num=0;

    printf("\n Enter an integer number->");
    scanf("%d",&num);

    (num==0)?printf("\n Given number is neutral"):((num<0)?printf("\n Given number is negative"):printf("\n Given number is positive"));

    printf("\n Thanks...!");
    getch();
    return 0;
}
