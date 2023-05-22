/* #include<stdio.h>
int main()
{
    int i = 2;
    if(i>=18)
    {
        printf("you can drive");
    }
    else{
        printf("you cannot drive");
    }
    return 0;
}
*/

// if else ladder
/*
#include<stdio.h>
int main()
{
    int marks;
    printf("Enter your marks");
    scanf("%d",&marks);

    if(marks>=90)
    {
        printf("you are pass");
    }
    else if(marks>=60)
    {
        printf("you are moderately pass");
    }

    else if(marks>=30)
    {
        printf("you are above the border pass");
    }

    else if(marks==20)
    {
        printf("you are fail");
    }
    return 0;
}
*/
#include<stdio.h>
int main()
{
    int grades;
    printf("Enter your grades ");
    scanf("%d", &grades);

    if(grades>='A')
    {
        printf("you have passed with good grades");
    }
    else if(grades>='B')
    {
        printf("you have passed with moderate grades");
    }
    else if(grades>='C')
    {
        printf("you have passed with descent grades");
    }    
return 0;
}
