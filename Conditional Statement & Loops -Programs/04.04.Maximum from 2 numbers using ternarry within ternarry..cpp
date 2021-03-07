#include<stdio.h>
#include<conio.h>
int main()
{
    int num1=0,num2=0;


    printf("\n Enter 2 Numbers =>");
    scanf("%d%d",&num1,&num2);

    (num1==num2)?printf("\n given both numbers are equal"):(num1>num2)?printf("\n given number1 is maximum"):printf("\n given number2 is maximum");

    printf("\n\n Thank You......!");
    getch();
    return 0;
}
