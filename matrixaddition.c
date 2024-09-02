#include<stdio.h>
int main()
{
    int i,j,numberOfRows,numberOfColms, A[10][10],B[10][10],C[10][10];
    printf(" Enter the number of Rows and Colums: ");
    scanf(" %d %d",&numberOfRows,&numberOfColms);
    printf("Enter elements of A Matrix= \n");
    for(i=0;i<numberOfRows;i++){
        for(j=0;j<numberOfColms;j++)
        {printf("A[%d][%d]= ",i,j);
            scanf("%d",&A[i][j]);
        }
        printf(" \n");
    }
    printf("Enter elements of B Matrix= \n");
    for(i=0;i<numberOfRows;i++){
        for(j=0;j<numberOfColms;j++)
        {printf("B[%d][%d]= ",i,j);
            scanf("%d",&B[i][j]);
        }
        printf("\n");
    }
    printf(" A= ");
     for(i=0;i<numberOfRows;i++){
        for(j=0;j<numberOfColms;j++)
        {
            
            printf("%d " , A[i][j]);

        }
        printf("\n");
        printf("\t");
    }
    printf("\n");
        printf(" B= ");
     for(i=0;i<numberOfRows;i++){
        for(j=0;j<numberOfColms;j++)
        {
            
            printf("%d " , B[i][j]);

        }
        printf("\n");
        printf("\t");
    }
     for(i=0;i<numberOfRows;i++){
        for(j=0;j<numberOfColms;j++)
        {
            C[i][j]=A[i][j] + B[i][j];
            
        }
     
    }
    printf("\n");
    printf(" A + B= ");
     for(i=0;i<numberOfRows;i++){
        for(j=0;j<numberOfColms;j++)
        {
            
            printf("%d " , C[i][j]);

        }
       printf("\n");
       printf("\t\t");
    }
    
    
}