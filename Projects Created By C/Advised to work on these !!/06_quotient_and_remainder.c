#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter value for a: ");
    scanf("%d", &a);

    printf("Enter value for b: ");
    scanf("%d", &b);

    int quotient;
    quotient = a / b;
    printf("Quotient is: %d\n", quotient);
    
    int remainder;
    remainder = a % b;
    printf("Remainder is: %d\n", remainder);
return 0;
}