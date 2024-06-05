// Online C compiler to run C program online
#include <stdio.h>

int main() 
{
 char str1[30]= "Al Mamun";
 char str2[30];
 int j,i=0,len=0;
 while(str1[i]!='\0')
 {
     i++;
     len++;
 }
 for(j=0,i=len-1;i>=0;i--,j++)
 {
     str2[j]=str1[i];
 }
 str2[j]='\0';
 printf("str1 = %s\n",str1);
 printf("str2 = %s\n",str2);
}