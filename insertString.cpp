#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
	int  i,n,loc,e;
	char a[100][100], item[15];
printf("\nEnter No. Of Elements:");
scanf("%d",&n);
printf("\nEnter List:");
for(i=1;i<=n;i++)
{
 printf("\na[%d]:",i);
  scanf("%s",a[i]);
}
for(;;)
{
printf("\nEnter Inserting Location:");
scanf("%d",&loc);
printf("\nEnter Inserting Item:");
scanf("%s",item);
//Shifting
    for(i=n;i>=loc;i--)
        {
         //a[i+1]=a[i];
            strcpy(a[i+1],a[i]);
        }
 //insert
 //a[loc]=item;
strcpy(a[loc],item);
n=n+1;
//display
printf("\nList after Insert:\n");
        for(i=1;i<=n;i++)
        {
            printf("\na[%d]=%s",i,a[i]);
        }
printf("\nPress any value for exit and 1 for continue: ");
scanf("%d", &e);
if(e!=1)
 return 0;
}
//}
	return 0;
}
