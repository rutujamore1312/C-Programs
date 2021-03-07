#include<stdio.h>
#include<conio.h>
int main()
{
    int num1=0,num2=0;

    up:
    printf("\n Enter 2 Numbers =>");
    scanf("%d%d",&num1,&num2);

    if(num1==num2)
    {
        printf("\n Given Both Numbers Are Equal");

        goto up;
    }
        (num1>num2)?printf("\n given number1 is maximum"):printf("\n given number2 is maximum");

         printf("\n\n Thank You......!");

         getch();
         return 0;
}
