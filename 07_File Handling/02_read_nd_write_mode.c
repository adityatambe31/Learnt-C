#include<stdio.h>
int main()
{
    FILE *fp;
    fp = fopen("file.txt", "w+");
    fputs("This is javatpoint", fp);
    fseek(fp, 8, SEEK_SET);
    fputs("Aditya Tambe", fp);
    fclose(fp);
}