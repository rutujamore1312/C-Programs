#include<stdio.h>
#include<conio.h>
int main()
{
    int i=0,j=0,c=0;

    printf("\n Enter a column value to print upper left triangle---->\n");
    scanf("%d",&c);

    for(i=1;i<=c;i++)

    {
        for(j=1;j<=c;j++)

        {

            if(i>=j)
            {
                printf(" 7 ");

            }
            else
            {
                printf("   ");
            }

            }
        printf("\n");

    }

    printf("\n Thank You..");
    getch();
    return 0;
}
