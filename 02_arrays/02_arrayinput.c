/* #include<stdio.h>
int main()
{
    int arry[5];
    printf("Enter 5 values");
    int i;
    int sum;
    for(i=0; i<5; i++)
    {
        scanf("%d",&arry[i]);
    }

    for(i=0; i<5; i++)
    {
        printf("%d\n",arry[i]);
        sum = sum + arry[i];
    }
    printf("Sum = %d", sum);

return 0;
}

*/

#include<stdio.h>
int main()
{
    int arry[2][2];
    int i,j;

    printf("Enter 4 values");
    for(i=0; i<2; i++)
    {
        for(j=0; j<2;j++)
        {
        scanf("%d",&arry[i][j]);
        }
    }

    int sum=0;
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
        printf("%d ",arry[i][j]);
        sum = sum + arry[i][j];
        }
        printf("\n");
    }
    printf("Sum = %d", sum);

return 0;
}