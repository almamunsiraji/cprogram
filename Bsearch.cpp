#include <stdio.h>
#include <stdlib.h>
#include<time.h>
int main()
{
  int c,i, j,temp, beg, end, mid, n, item, array[1000];

  printf("Enter number of elements\n");
  scanf("%d", &n);

  printf("Enter %d  integers\n", n);

  for (c = 0; c < n; c++)
    scanf("%d", &array[c]);

  /* srand(time(NULL));
    for(i=0;i<n;i++)
        {
        array[i]=rand();
        printf("\na[%d]= %d",i,array[i]);
        }*/

/*for(j=0;j<n-1;j++)
{
//printf("\n");
        for(i=0;i<n-j;i++)
        {
            if(array[i]>array[i+1])
            {

                temp=array[i];
                array[i]=array[i+1];
                array[i+1]=temp;
              //printf("%3d", array[i]);
            }

        }
}
printf("\n List after sorting\n");
for(i=0;i<n;i++)
        {
        printf("\na[%d]= %d",i,array[i]);
        }*/

  printf("\nEnter value to find\n");
  scanf("%d", &item);

  beg= 0;
  end = n - 1;
  mid = (beg+end)/2;

  while (beg <= end) {
    if (array[mid] < item)
      beg = mid + 1;
    else if (array[mid] == item) {
      printf("%d found at location %d.\n", item, mid);
      break;
    }
    else
      end = mid - 1;

    mid = (beg + end)/2;
  }
  if (beg> end)
    printf("Not found! %d isn't present in the list.\n", item);

  return 0;
}
