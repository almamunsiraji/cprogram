#include<stdio.h>
int main(){
    FILE *fptr;
    fptr= fopen("text.txt","r");
    if(fptr=NULL){
        printf("File doesn't exit here:");
    }
    else{
         fclose(fptr);
    }
   
    return 0;
}