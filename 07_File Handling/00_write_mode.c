#include<stdio.h>
int main()
{
    FILE *fp;
    fp = fopen("file.txt", "w");
    fprintf(fp,"hello Adi");
    fclose(fp);
    return 0;
}