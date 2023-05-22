#include<stdio.h>
int main()
{
    int arr[10] = {10,20,30,40,50};
    
    int i;
    for(i=0; i<5; i++)
    {
        printf("%d = %x\n",arr[i],&arr[i]);
    }
    return 0;
}
