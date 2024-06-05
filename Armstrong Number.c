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
        sum=sum+ r*r*r;
        temp=temp/10;
        
    }
    if(num==sum)
    printf("This is armstrong number");
    else
    printf(" This is not armstrong number");
    
    
return 0;
    
}
