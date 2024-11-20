#include <stdio.h>

int main() {
    int n,n1,n2,count,i;
    printf(" Enter the the number of range: ");
    scanf(" %d%d",&n1,&n2);
    printf(" Prime numbers are: ");
    for(n=n1;n<=n2;n++){
        count=0;
        for(i=2;i<=n/2;i++){
        if(n%i==0){
            count++;
        }
        }
        if(count==0 && n!=0){
            printf("%d ",n);
        }

    }

    return 0;
}