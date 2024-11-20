#include<stdio.h>
#include<string.h>
int main(){
    char oldName[]="Hello";
    char newName[]="World";
    printf("%d",strcmp(oldName,newName));
    return 0;
}