#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int a[1000],i,n,item,loc,e;
    printf("\n Enter number of Elements: ");
    scanf("%d",&n);
    srand(time(NULL));
    for(i=0;i<n;i++){
        a[i]=rand();
        printf("\na[%d]=%d",i,a[i]);
    }
    for( ; ; ){
        printf("\nEnter Inserting Location: ");
        scanf("%d",&loc);
        printf("\nEnter Inserting Item:");
        scanf("%d",&item);
        for(i=n-1;i>=loc-1;i--){
            a[i+1]=a[i];
        }
        a[loc]=item;
        n=n+1;
        printf("\nList after Insert: ");
        for(i=0;i<n;i++){
            printf("\na[%d]=%d",i,a[i]);
        }
        printf("\n press any value for exit and 1 for continue: ");
        scanf("%d",&e);
        if(e!=1){
            return 0;
        }
    }
}