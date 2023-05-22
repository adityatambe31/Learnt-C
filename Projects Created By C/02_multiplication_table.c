#include<stdio.h>
int main()
{
    int num;
    printf("Please enter the number whose table is to be printed ");
    scanf("%d", &num);
    printf("The Table of %d is\n", num);

    for (int i = 1; i <= 10; i++)
    {
        printf(("%d * %d = %d\n"), num, i, i*num);  
    }
    return 0;
}
