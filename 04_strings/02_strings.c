


#include<stdio.h>
#include<string.h>

int main()
{
    char str1[20] = "Hello Adi";
    char str2[20] = "";

    printf("before copy\n");
    printf("str1 = %s\n", str1);
    printf("str2 = %s\n", str2);

    strcpy(str2,str1);

    printf("After copy\n");
    printf("str1 = %s\n", str1);
    printf("str2 = %s\n", str2);

    return 0;
}