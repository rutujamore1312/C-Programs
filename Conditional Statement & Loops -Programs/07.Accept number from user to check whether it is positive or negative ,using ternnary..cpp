#include<stdio.h>
#include<conio.h>
int main()
{
    int num=0;

    Up:

    printf("\n Enter an integer number->");
    scanf("%d",&num);

    if(num==0)
    {
        printf("\n Given Number is Neutral");
        goto Up;
    }
    (num<0)?printf("\n Given Number is Negative."):printf("\n Given Number is Positive." );

    printf("\n Thank You...");


    getch();
    return 0;

}
