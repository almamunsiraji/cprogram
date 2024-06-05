#include<stdio.h>
int main()
{
    int number,temp,sum=0,reminder;
    printf(" Enterr any number: ");
    scanf("%d",&number);
    temp=number;
    while(temp!=0)
    {
      reminder=temp%10;
      sum=sum+reminder;
      temp=temp/10;
    }
    printf(" Sum of Digits = %d\n", sum);
}