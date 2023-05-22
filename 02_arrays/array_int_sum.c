#include<stdio.h>
int main()
{
    int arry[7] = {10,20,50,70,20,60};
	    
    int sum = 0;
	int i;
    
    for(i=0; i<7; i++)
    {
    	sum = sum + arry[i];
	}
       printf("Sum = %d", sum);
       
    return 0;
}
