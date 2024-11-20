#include <stdio.h>
#include <stdlib.h>
#include<time.h>
int main()
{
    int i,a[100],n;
    printf("Enter No. of Elements:");
    scanf("%d",&n);
    //srand(time(NULL));
    for(i=0;i<n;i++)
    {
	a[i]=rand()%10;
	printf("\na[%d]=%d",i,a[i]);
    }
	return 0;
}
