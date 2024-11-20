#include<stdio.h>
int tower(int n,char beg,char aux, char end);
int main(){
    int n;
    printf("Enter the number of disks:");
    scanf("%d",&n);
    tower(n,'A','B','C');
}

int tower(int n,char beg,char aux, char end){
    if(n==1){
        printf("\n%c---------->%c",beg,end);
        
    }
    else{
        tower(n-1,beg,end,aux);
        printf("\n%c---------->%c",beg,end);
        tower(n-1,aux,beg,end);
    }
}