#include<stdio.h>
int main()
{
    int rows;
    printf("Enter row\n");
    scanf("%d",&rows);
    for(int i=1;i<=rows;i++)
    {
        for(int j=1;j<=rows;j++)
        {
            if((i==1 || i==rows) || (j==1 || j==2) )
            {
            printf("*");
            }
            else
            {
            printf(" ");
            }
            
        }
    printf("\n");
    }
}