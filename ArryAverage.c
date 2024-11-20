#include<stdio.h>
int main()
{
int num[5],i,sum=0;
printf(" Enter five number");
for(i=0;i<5;i++)
{
    scanf("%d",&num[i]);
}

for(i=0;i<=4;i++)
{
    sum= sum + num[i];
}
printf(" The Sum is: %d\n",sum);
printf("The  Average is: %.2f\n", (float)sum/5);
}

