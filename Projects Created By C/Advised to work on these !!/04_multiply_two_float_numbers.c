#include<stdio.h>
int main()
{
    float a,b;
    printf("Enter a floating value a : ");
    scanf("%f", &a);

    printf("Enter a floating value b : ");
    scanf("%f", &b);

    float multi = a * b;
    printf("Multiplication of two numbers is : %.1f", multi);
    
return 0;
}