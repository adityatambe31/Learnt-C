#include<stdio.h>
int main()
{
    int arr[10] = {10,20,30,40,50};
    int i;

    int *p = arr;
    for(i=0; i<5; i++)
    {
    printf("%d = %x\n",*(p+i),(p+i));
    }
    return 0;
}
