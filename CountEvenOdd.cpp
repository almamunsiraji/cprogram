/**
 * C program to find even and odd elements in an array
 */
#include <stdio.h>
#include <stdlib.h>
#include<time.h>
int main()
{
    int arr[100],i, size;
    // Input size of the array
    printf("Enter size of the array: ");
    scanf("%d", &size);
    srand(time(NULL));
        for(i=0;i<size;i++)
        {
        arr[i]=rand()%100;
        printf("\n%d",arr[i]);
        }

    printf("\n\nEven values:\n");
    for(i=0; i<size; i++)
    {
        if(arr[i]%2 == 0)
        {
            //even++;
            printf("\n arr[%d]= %d",i,arr[i]);
        }

    }
    printf("\n\nOdd values:\n");
    for(i=0; i<size; i++)
    {
        if(arr[i]%2 != 0)
        {
            //odd++;
            printf("\n arr[%d]=%d",i,arr[i]);
        }

    }

    return 0;
}
