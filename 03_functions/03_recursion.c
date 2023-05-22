#include<stdio.h>

int factorial(int num)
{
if(num == 0)
{
    return 1;
}

else if (num == 1)
{
    return 1;
}

else{
    return num * factorial (num - 1);
}

}

int main()
{
    int f = factorial(5);
    printf("Factorial = %d\n",f);
    return 0;
}
