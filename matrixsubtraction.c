#include<stdio.h>
int main()
{
    int i,j,numberOfRows, numberOfColms, A[100][100],B[100][100],C[100][100];
    printf(" Enter the Number of Rows and Colms: ");
    scanf(" %d %d",&numberOfRows, &numberOfColms);
    printf("Enter the elements of Matrix A : \n");
    
    for(i=0;i<numberOfRows;i++){
        for(j=0;j<numberOfColms;j++)
        {
            
            printf("A[%d][%d] =",i,j);
            scanf("%d",&A[i][j]);
        }
        printf("\n");
        
    }
    printf("Enter the elements of Matrix B : \n");
    
    for(i=0;i<numberOfRows;i++){
        for(j=0;j<numberOfColms;j++)
        {
            
            printf("A[%d][%d] =",i,j);
            scanf("%d",&B[i][j]);
        }
        printf("\n");
        
    }
    printf("A = ");
    for(i=0;i<numberOfRows;i++){
        for(j=0;j<numberOfColms;j++)
        {
            
            printf("%d ",A[i][j]);
        }
        printf("\n");
        printf("\t");
        
    }
    printf("\n");
    printf("B = ");
    for(i=0;i<numberOfRows;i++){
        for(j=0;j<numberOfColms;j++)
        {
            
            printf("%d ",B[i][j]);
        }
        printf("\n");
        printf("\t");
        
    }
    
    printf("\nC = ");
    for(i=0;i<numberOfRows;i++){
        for(j=0;j<numberOfColms;j++)
        {
            C[i][j]= A[i][j] - B[i][j];
              printf("%d ",C[i][j]);
        }
      
        printf("\n");
        printf("\t");
        
    }
}