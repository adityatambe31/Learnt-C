#include<stdio.h>
int main()
{
    FILE *fp;
    char c;
    fp = fopen("file.txt", "r");
    while((c = fgetc(fp)) != EOF)
    {
        printf("%c", c);
    }
    fclose(fp);
}
/// output is copied from file to console...