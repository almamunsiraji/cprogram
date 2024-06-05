#include<stdio.h>
int main()
{
    int r,num,temp,sum=0;
    printf(" Enter any digit : ");
    scanf("%d",&num);
    temp=num;
    while(temp!=0)
    {
        r=temp%10;
        sum=sum*10+r;
        temp=temp/10;
        
    }
    if(num==sum)
    printf(" This is palindrom");
    else
    printf(" this is not palindrom");
return 0;
    
}
