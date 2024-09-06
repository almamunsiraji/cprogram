#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
   char a[1000][1000];
   int i,n,p,c;
   printf("\nEnter No. of Names : ");
   scanf("%d",&n);
   printf("\nEnter List \n");
   for(i=0;i<n;i++){
    printf("\na[%d] = ",i);
    scanf("%s",a[i]);
   }
   for(;;){
    printf("\nEnter position : ");
    scanf("%d",&p);
    if(p<n){
        for(i=p;i<n;i++){
            strcpy(a[i],a[i+1]);
        }
        n-=1;
        printf("\nList after deleting ");
        for(i=0;i<n;i++){
            printf("\na[%d] = %s",i,a[i]);
        }
        printf("\nPress any key to exit and 1 for continue : ");
        scanf("%d",&c);
        if(c!=1)
            break;
    }
    else
        printf("\nThis position can't be reach!");
   }
   return 0;
}

