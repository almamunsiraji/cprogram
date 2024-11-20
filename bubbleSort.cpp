#include <stdio.h>
#include <stdlib.h>
#include<time.h>
int main()
{
	int a[100], i,j, n,temp;
printf("\nEnter No. Of Elements:");
scanf("%d",&n);
srand(time(NULL));
    for(i=0;i<n;i++)
        {
        a[i]=rand()%100;
        printf("\na[%d]=%d",i,a[i]);
        }
//sorting Process1
for(j=1;j<=n-1;j++)//control passes
{
        printf("\nPass %d:\n",j);
        for(i=0;i<n-j;i++)
        {
            if(a[i]>a[i+1])
            {
    //Interchange
                temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }
           for(int k=0;k<n;k++)
           {
            printf("%d    ",a[k]);
            }
            printf("\n");
        }
}
printf("\n\nSorted List:\n");
for(i=0;i<n;i++)
        {
        printf("\na[%d]=%d",i,a[i]);
        }
	return 0;
}
