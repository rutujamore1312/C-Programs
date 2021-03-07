#include<stdio.h>
#include<conio.h>
int main()
{
    int num=0;
    up:
    printf("\n Enter an integer number");
    scanf("%d",&num);

     if(num%2==0)
    {
        printf("\n Given Number is even");
    }
    else
    {
        printf("\n Enter given number is odd");
    }
    printf("\n Thanks.....!");
    getch();
    return 0;

}
