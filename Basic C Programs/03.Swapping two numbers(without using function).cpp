#include<stdio.h>
#include<conio.h>
int main()
{
    int num1=0,num2=0,temp=0;
    printf("\n Enter 2 numbers for swapping ->");
    scanf("%d%d",&num1,&num2);

    printf("\n Befor swap 1st number =%d",num1);

    printf("\n Befor swap 2nd number =%d",num2);
    temp=num1;
    num1=num2;
    num2=temp;


    printf("\n after swap 1st number =%d",num1);

    printf("\n after swap 2nd number =%d",num2);

    printf("\n Thanksss!");
    getch();
    return 0;
    }
