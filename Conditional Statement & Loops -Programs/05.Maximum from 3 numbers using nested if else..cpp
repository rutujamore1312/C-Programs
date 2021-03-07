#include<stdio.h>
#include<conio.h>
int main()
{
    int num1=0,num2=0,num3=0;

        printf("\n Enter 3 Numbers =>");
        scanf("%d%d%d",&num1,&num2,num3);

    if(num1==num2)&&(num2==num3)
    {
        printf("\n Given Both Numbers Are Equal");

        goto down;
    }

   if(num1>num2)
    {
        if(num1>num3)
        {
         printf("\n Given number1 is maximum");
        }
        else
        {
         printf("\n given number3 is maximum");
            }
        else if(num2>num3)
        {
         printf("\n given number2 is maximum");
        }

         printf("\n\n Thank You......!");
         getch();
         return 0;
}
