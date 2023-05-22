#include<stdio.h>

int main ()
{
    int a = 10;
    
    printf("Value of a = %d\n", a);
    printf("address of a = %x\n", &a);


    int *ptr = &a;
    printf("Value of a by ptr = %d\n", *ptr);
    printf("address of a by ptr= %x\n", ptr);
    return 0;
}


/* output
Value of a = 10
address of a = 61ff18
Value of a by ptr = 10
address of a by ptr= 61ff18
*/