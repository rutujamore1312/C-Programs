#include<stdio.h>
#include<conio.h>
int main()
{
    int i=0,j=0,c=0;
    printf("\n enter a column value to print I pattern");
    scanf("%d",&c);

    for(i=1;i<=c;i++)
    {
        for(j=1;j<=c;j++)
        {
            if(i==1||i==c||j==3)
            {
                printf(" * ");
            }
            else
            {
                printf("   ");
            }
        }
        printf("\n" );
    }
    printf("\n -------------");
    getch();
    return 0;
}
