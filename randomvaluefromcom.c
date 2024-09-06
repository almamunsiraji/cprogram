#include<stdio.h>
#include<stdlib.h>  //rand()
#include<time.h>  //srand()
int main()
{
    int a[100],n,i;
    printf(" Enter number of Elements: ");
    scanf(" %d",&n);
    srand(time(NULL));
    for(i=0;i<n;i++){
        a[i]=rand();
        printf("\na[%d]= %d",i,a[i]);
    }
}