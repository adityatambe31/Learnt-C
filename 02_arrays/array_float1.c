#include<stdio.h>
int main()
{
    float arr[5] = {10.21,20.31,30.41,40.51,50.61};
    int i;
    for(i=0; i<5; i++)
    {
        printf("%.1f\n",arr[i]);
	}

    return 0;
}
