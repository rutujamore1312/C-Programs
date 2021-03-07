#include<stdio.h>
#include<conio.h>
int main()
{
    int Num=0;
    printf("\n Enter an integer Number=");
    scanf("%d",&Num);

    (Num==0)?printf("\n given Number is neutral"):((Num%2==0)?printf("\n Given number is even"):printf("\n given number is odd"));

       getch();

        printf("\n Thnaks....!!!");

    getch();
    return 0;
}
