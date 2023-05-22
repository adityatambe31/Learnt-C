// Program to Calculate several operation held by user input of two numbers.........

#include<stdio.h>
int main()
{
    char operator;
    int num1,num2,result;

    printf("Enter An Operator(+, -, *, /): ");
    scanf("%c", &operator);

    printf("Enter two number: ");
    scanf("%d%d" ,&num1,&num2);

    switch(operator){
        case'+':
        result = num1 + num2;
        break;
        case'-':
        result = num1 - num2;
        break;
        case'*':
        result = num1 * num2;
        break;
        case'/':
        result = num1 / num2;
        default:
        printf("Invalid Operator!!");
        return 1;
    }

    printf("Result %f\n", result);
    return 0;
}
/**/