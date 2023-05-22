// 2D array matrix 

#include<stdio.h>
int main()
{
    int arry[100][100] = {
        {1,2,3,4,5,6},
        {7,8,9,10,11,12},
        {13,14,15,16,17,18},
        {19,20,21,22,23,24},
        {25,26,27,28,29,30},
        {31,32,33,34,35,36},
        };
        
        int i,j;
        int sum=0;
        for(i=0; i<10; i++)
        {
        for(j=0; j<10; j++)

        {
            printf("%d  ", arry[i][j]);
            sum = sum + arry[i][j]; 
        }    
            printf("\n");
        }
            printf("Sum = %d\n",sum);
return 0;
}