#include<stdio.h>
int main()
{
    int rows;
    printf("Enter your rows\n");
    scanf("%d",&rows);
    int k=rows;
    for(int i=1;i<=rows;i++)
    {
        for(int j=1;j<=k;j++)
        {
            printf("*");
        }
        k--;
        printf("\n");
    }

} 