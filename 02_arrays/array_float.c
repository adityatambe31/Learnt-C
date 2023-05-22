
#include<stdio.h>
int main()
{
    float arry[7] = {10.50,20.40};
    
    float sum = 0;
	int i;
	    
    for(i=0; i<3; i++)
    {
    	sum = sum + arry[i];
	}
        printf("Sum = %.1f\n", sum);

return 0;

}
