// Even or odd find out using traversing
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a[1000],n,i,e=0,o=0;
    printf(" Enter array size: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        a[i]=rand()%100;
        printf("\na[%d]=%d",i,a[i]);
    }
    printf("\nEven Value: ");
    for(i=0;i<n;i++){
        if(a[i]%2==0){
           
            printf("\n%d",a[i]);
             e=0+1;
            
        }
        
         
    }
    printf("\nTotal Number of Even:%d",e);
    
    printf("\nOdd Value: ");
    for(i=0;i<n;i++){
        if(a[i]%2!=0){
           
            printf("\n%d",a[i]);
             o=o+1;
        }
        
         
    }
    printf("\nTotal Number of Odd:%d",o);
}