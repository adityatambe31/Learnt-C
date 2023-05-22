// pointer to pointer

#include<stdio.h>

int main()
{
    int a = 10;
    printf("Value of a = %d\n", a);
    printf("Address of a = %x\n", &a);

    int *ptr = &a;
    printf("Value of a by ptr= %d\n", *ptr);
    printf("Address of a by ptr= %x\n", ptr);
    printf("Address of ptr = %x\n", &ptr);

    int **dptr = &ptr;
    printf("Value of ptr by dptr= %d\n", **dptr);
    printf("Address of ptr by dptr= %x\n", dptr);
    printf("Address of dptr = %x\n", &dptr);
    return 0;
}

/* output
Value of a = 10
Address of a = 61ff1c
Value of a by ptr= 10
Address of a by ptr= 61ff1c
Address of ptr = 61ff18
Value of ptr by dptr= 10
Address of ptr by dptr= 61ff18
Address of dptr = 61ff14
*/