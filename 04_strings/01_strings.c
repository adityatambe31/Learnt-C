// string compare  strcmp
// string copy     strcpy


#include<stdio.h>
#include<string.h>

int main()
{
    char str1[40] = "Good morning";
    char str2[40] = "Adi";

    // printf("%d\n", strcmp(str1,str2));
    
    if(strcmp(str1,str2) == 0)
    {
        printf("both strings are same");
    }

    else{
        printf("both strings are not same");
}
return 0;
}