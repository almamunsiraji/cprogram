#include<stdio.h>
#include<ctype.h>
#include<math.h>
int main ()
{
    int i, number, count=0;
    printf(" Enter any number= ");
    scanf("%d", &number);
     if(number<=1)
     {
         count=1;
     }
     else {
         for( i=2; i<=number/2; i++){
             if(number%i==0){
                 count=1;
                 break;
             }
         }
     }
     
     if ( count==0){
         printf(" %d is a prime number ", number);
     }
     else {
         printf (" %d is not a prime number", number);
     }
}