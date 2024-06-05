#include<stdio.h>
int main()
{
    char n[100];
    int i,j,len;
    scanf("%s",n);
    for(len = 0;n[len]!='\0';len++);
        for(i=0,j=len-1;i<=((len/2)-1);i++,j--)
    {
        if(n[i]!=n[j])
        {
        printf("Not Palindrome.");
        return 0;
        }
    }
    printf("Palindrome.");
}