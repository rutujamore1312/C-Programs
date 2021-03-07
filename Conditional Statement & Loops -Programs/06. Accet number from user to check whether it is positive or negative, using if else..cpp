#include<stdio.h>
#include<conio.h>
int main()
{
    int num=0;
    printf("\n Enter An Integer Number");
    scanf("%d",&num);
    if(num<0)
    {
        printf("\n Given number is negative");
    }
    else
    {
        printf("\n Given number is positive");
    }
    printf("\n Thanks..!");
    getch();
    return 0;
}
