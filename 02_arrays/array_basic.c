 #include<stdio.h>
int main()
{
    int i = 0;
    int marks[5]; // declearation of arrays
    marks[0]= 80;
    marks[1]= 60;
    marks[2]= 50;
    marks[3]= 45;
    marks[4]= 35;

    for(i=0; i<5; i++)
    {
        printf("%d\n",marks[i]);
    }
    return 0;
}