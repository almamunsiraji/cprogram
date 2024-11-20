#include<stdio.h>
#include<string.h>
int main(){
    char oldName[]="Hello";
    char newName[]="World";
    strcat(oldName,newName);
    puts(oldName);
    return 0;
}