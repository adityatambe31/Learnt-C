

// string charlen()
// string concat()

#include<stdio.h>
#include<string.h>
int main()
{
    char adi[10] = {'A', 'd', 'i', 't' , 'y', 'a'};
    printf("%s\n",adi);
    printf("String length = %d\n", strlen(adi));


    char str[10] = {"Adi"};
    printf("%s\n", str);
    printf("String length = %d\n", strlen(str));
    
    char str2[10] = {"Tambe"};
    strcat(str ,str2);
    printf("str = %s\n", str);
    printf("str = %s\n", str2);


    return 0;
}