#include<stdio.h>
int main()
{
    int num[100]={12,23,34,45,56,67,68,78,79,70};
    int value, i, pos=-1;
    printf(" Enter your value that is you want to search:");
    scanf(" %d",&value);
    for(i=0;i<11;i++){
        if(value==num[i])
       { pos=i+1;
        break;}
    }
    if(pos==-1){
        printf(" This value is not found here ");
    }
    else{
        printf(" This value found here");
    }
}