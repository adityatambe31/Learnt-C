// nest for loop

#include<stdio.h>
int main ()
{
    int i,j;   // i = row j = cols

    for (i=6;i>=1;i--)
    {
        for(j=1; j<=i ; j++)
        {
            printf("*");
        }
        printf("\n");
    } 
return 0;
}


 /*output ******
          *****
          ****
          ***
          **
          *
*/

#include<stdio.h>
int main()
{
    int i = 1;
    while(i<=3)
    {
        int j = 1;                    
        while(j<=3)
        {

        
        printf("%d",j);
        j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}


//output
/*123
  123
  123*/


#include<stdio.h>
int main()
    {
    int i,j; //i = rows j = cols

    for(i = 1; i<=3; i++) // row= 1,2,3,4
    {
        for(j = 1; j<=3; j++) // cols= 1.2.3.4
        {
            printf("%d" ,j);
        }
        printf("\n");
    }
return 0;
}
// output
// 123
// 123
// 123


 #include<stdio.h>
int main()
{
    int i,j;
    
    for(i=1; i<=5; i++)
    {
        for(j=1; j<=i; j++)
        printf("$");

        printf("\n");
    }
    return 0;
}

// output
// $
// $$
// $$$
// $$$$
// $$$$$


#include<stdio.h>
int main()
{
    int i,j;
    int count = 1;
    for(i = 1; i<=3; i++)
    {
        for(j = 1 ; j<=3; j++)
        {
            printf("%d", count);
            count++;
        }
        printf("\n");
    }
    return 0;
}

/*output
123
456
789*/


#include<stdio.h>
int main()
{
    int i,j;
    int count = 1;
    for(i = 300; i>=1; i--)
    {
        for(j = 1 ; j<=i; j++)
        {
            printf("$", count);
            count++;
        }
        printf("\n");
    }
    return 0;
}

//descending for loop 



#include<stdio.h>
int main()
{
    int a,b;
    for (a=1; a<=15; a++)
    {
        for(b=1; b<=a; b++)
        {
            printf("&",a);
        }
        printf("\n");
    }
return 0;
}


// loops last topic which consists of break, continue and goto where indeed break = stop , continue = skip and goto = skips

// break loop = helps to stops the loop

#include<stdio.h>
int main()
{
    int i;
    for(i=1; i<=10; i++)
    {
        printf("%d\n",i);
        if(i==5)
        {
            break;
        }
    printf("loop ends");
    }
    return 0;
}


// continue = helps to skip and make more efficient code......

#include<stdio.h>
int main(){

    int i;
    for(i=1; i<=8; i++)
    {
        if(i==5)
        {
            continue;
        }
        printf("%d\n",i);
        printf("hello"); 
    }
    return 0;
}


// goto loop = helps to jump 

#include<stdio.h>
int main()
{
    int i = 1;
    
    growth: // label of the loop
        if(i<=100)
        {
            printf("%d\n",i);
            i++;
            goto growth;
        }
    return 0;
}

// with less function we can create a number of series with it....


#include<stdio.h>
int main()
{
    int i;
    for (i=1; i<=10; i++)
    {
        if(i<=5){
        printf("%d\n",i);
    }
}
return 0;
}


#include<stdio.h>
int main() {
    int i= 10;
    while (i>=1)
    {
        if(i>=5)
        {
        printf("%d\n",i);
        i--;
        }
    }
    return 0;
    
}



#include<stdio.h>
int main()
{
    int i = 1;
    do{
        if(i<=5)
        {
            printf("%d\n",i);
            i++;
        }
    }while(i<=10);

    return 0;
}

