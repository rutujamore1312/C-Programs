#include<stdio.h>
#include<conio.h>
int main()
{
    int Num=0;
    printf("\n Enter an integer Number=");
    scanf("%d",&Num);

    if(Num==0)
    {
        printf("\n Given Number is Neutral");
    }
    else if(Num%2==0)
    {
        printf("\n Given Number is Even");
    }
    else
    {
        printf("\n Given Number Is Number is odd !!!");
    }


        printf("\n Thank You.....");

    getch();
    return 0;
}
