#include<stdio.h>
int main(){
    int A[100][100],B[100][100],C[100][100],r1,r2,c1,c2,i,j,k,sum=0;
    printf("Enter Row and Colms for 1st Matrix: ");
    scanf("%d%d",&r1,&c1);
    printf("Enter Row and Colms for 2nd Matrix: ");
    scanf("%d%d", &r2,&c2);
    while(c1!=r2){
        printf(" !Error! c1 is not equal r2\n");
        printf(" Enter Row and Colms for 1st Matrix: ");
    scanf("%d%d",&r1,&c1);
    printf(" Enter Row and Colms for 2nd Matrix: ");
    scanf("%d%d", &r2,&c2);
        
    }
    printf("Enter elements of Matrix A: \n");
    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++)
        {
            printf("A[%d][%d]=",i,j);
            scanf("%d",&A[i][j]);
        }
        printf("\n");
        
    }
    printf("Enter elements of Matrix B: \n");
    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++)
        {
            printf("B[%d][%d]=",i,j);
            scanf("%d",&B[i][j]);
        }
        printf("\n");
        
    }
   for(i=0;i<r1;i++){
       for(j=0;j<c2;j++){
           for(k=0;k<c1;k++){
               sum= sum + A[i][k] * B[k][j];
           }
           C[i][j] = sum;
           sum=0;
       }
   }
    printf("A = ");
    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++)
        {
        printf("%d ",A[i][j]);
        }
        printf("\n ");
        printf("\t");
        
        
    }
    
    printf("\nB = ");
    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++)
        {
        printf("%d ",B[i][j]);
        }
        printf("\n ");
        printf("\t");
        
        
    }
      printf("\nC = A * B = ");
    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++)
        {
        printf("%d ",C[i][j]);
        }
        printf("\n ");
        printf("\t\t\t");
        
        
    }
}