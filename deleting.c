#include <stdio.h>
#include <stdlib.h>
#include<time.h>
int main()
{
	int a[100], i,n, item,loc,e;
printf("\nEnter No. Of Elements:");
scanf("%d",&n);
srand(time(NULL));
    for(i=1;i<=n;i++)
        {
        a[i]=rand();
        printf("\na[%d] = %d",i,a[i]);
        }
for(;;)
{

printf("\nEnter Deleting Location:");
scanf("%d",&loc);
item = a[loc];
printf("\nDeleting  Item: %d", item);

//Shifting
    for(i=loc;i<=n;i++)
        {
            a[i]=a[i+1];
        }
 //delete
n=n-1;
// display
printf("\nList after Delete:\n");
        for(i=1;i<=n;i++)
        {
            printf("\na[%d]=%d",i,a[i]);
        }
printf("\nPress any value for exit and 1 for continue: ");
scanf("%d", &e);
if(e!=1)
 return 0;
}
//}
	return 0;
}
