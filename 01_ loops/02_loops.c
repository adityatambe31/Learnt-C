


//Loops 30/03/23 
//for loop
//while loop
//do while loop
#include<stdio.h>  // while loop
int main()
{
    int i= 10;
    while (i >=1)
    {
        printf("%d\n",i);
        i--;
    }
    
    return 0;
    
}


 #include<stdio.h> // do while loop
int main()
{
    int i = 11;
    do
    {
        printf("%d\n",i);
        i++;
    } while (i <=10);
    return 0;
    
}



 #include <stdio.h>
int main() {
    int num1,num2,num3,num4;
    printf("Enter the Four numbers: ");
    scanf("%d%d%d%d",&num1,&num2,&num3,&num4);
    printf("Sub=%d\n",num1-num2-num3-num4);
    printf("Sum=%d\n",num1+num2+num3+num4);
    printf("Div=%d\n",num1/num2/num3/num4);
    printf("Modulus=%d\n",num1%num2%num3%num4);
    return 0;
}
// arthematic opteration code and can be use to prepare a calculator.

//Loops 
//for loop
//while loop
//do while loop


 #include<stdio.h>  // while loop
int main()
{
    int i= 10;
    while (i >=1)
    {
        printf("%d\n",i);
        i--;
    }
    
    return 0;
    
}


 #include<stdio.h> // do while loop
int main()
{
    int i = 11;
    do
    {
        printf("%d\n",i);
        i++;
    } while (i <=10);
    return 0;
    
}



     // switch case

#include<stdio.h>
int main()
{
 int x = 1;
 switch(x)
 {
    case 1:
    printf("value is 1");
    break;

    case 2:
    printf("value is 2");
    break;

    case 3:
    printf("value is 3");
    break;

    case 4:
    printf("value is 4");
    break;

    case 5:
    printf("value is 5");
    break;

    default:
    printf("value is greater than 5");
    break;
    return 0;

}

}



// for loop


#include<stdio.h>
int main()
{
    int i;
    for (i = 1 ; i<=10 ; i++)
    {
        printf("%d\n",i);
    }
    return 0;
}
