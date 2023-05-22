#include<stdio.h>
int main()
{
    FILE *fp;
    fp = fopen("file.txt", "w");
    fputc('a', fp);
    fclose(fp);
}