#include<stdio.h>
int main()
{
    double arry[7] = {10.30,20.40};
    
    double sum = 0;
	int i;
    
    for(i=0; i<3; i++)
    {
    	sum = sum + arry[i];
	}
        printf("Sum = %.1lf\n", sum);

return 0;

}

