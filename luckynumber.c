#include<stdio.h>
int main()
{
    int number,rem, count=0;
    printf(" Enter any digit : ");
    scanf("%d",&number);
    while(number!=0)
    {
    rem=number%10;
    number=number/10;
    if(rem==4){
      count=count+1;} 
 if(rem==7){
          count=count+1;
      }
    }
   if(count<2)
     {
    printf("This Number is not Lucky Number");}
    else
    { printf("This Number is Lycky number ");
    }
    return 0;
    
}