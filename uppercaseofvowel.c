#include<stdio.h>
#include<string.h>
#include<ctype.h>
void uppercase( char str[]);
int main(){
    char str[200]="Abdullah Al Mamun"; 
    uppercase(str);
    return 0;
}

void uppercase( char str[]){
    for(int i=0;str[i]!='\0';i++){
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'){
            str[i]= toupper(str[i]);
            
        }
 
    }
   printf("%s",str);
}