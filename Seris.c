#include<stdio.h>
int main()
{
int i,num, num1,sum=0;
printf(" Enter first and last Digit : ");
scanf(" %d%d",&num,&num1);
printf(" %d+2+3+........+ %d",num,num1);
for(i=num;i<=num1;i++)
{
    sum=sum+i;
}
printf(" = %d\n",sum);


return 0;
    
}
