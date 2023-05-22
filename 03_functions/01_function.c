
#include<stdio.h>
void sub(int x, int y);
// declaration of function


int main()
{

    int a = 10, b = 20, c = 30, d = 40;
    
    sub(b, a);
    sub(d, c);

return 0;
}

// executing the function
void sub(int x, int y)
{
printf("Sub= %d\n ", x-y);
}