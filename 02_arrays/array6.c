#include<stdio.h>
int main()
{
    int marks[10] = {100, 150, 160, 175, 145, 135, 125, 195, 115};
    int a;

    for(a=10; a>=0; a--)
    {
        printf("%d\n", marks[a]);
    }
    return 0;
}