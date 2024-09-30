/* taking User input then addition by C programming */
#include<stdio.h>
int main()
{
    int n1, n2,n3, sum=0;
    printf(" Enter three integer: ");
    scanf(" %d %d %d",&n1,&n2,&n3);
    sum=n1+n2+n3;
    printf(" Sum is = %d",sum);
    return 0;
}