#include<stdio.h>
#include<string.h>
int main(){
    char oldstr[]="Hello";
    char newstr[]="World";
    strcpy(newstr,oldstr);
    puts(oldstr);
    return 0;
}