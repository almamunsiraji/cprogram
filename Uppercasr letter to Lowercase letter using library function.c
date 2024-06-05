// uppercase letter to lowercase letter //
#include<stdio.h>
#include<ctype.h>
int main()
{
    char upper, lower;
    printf(" Enter the Uppercase letter:");
    scanf("%c", &upper);
    lower= tolower(upper);
    printf(" Lowercase letter is=%c", lower);
    return 0;
}