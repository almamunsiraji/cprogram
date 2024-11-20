#include <stdio.h>
int main()
{
    int i,loc,n,c;
    float a[50],item;
    printf("Enter No. of Elements:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
        {
            printf("\na[%d]=",i);
        scanf("%f",&a[i]);
        }
        for(;;)
            {
            loc=-1;
            printf("\nEnter Searching Item:");
            scanf("%f",&item);
                for (i=0;i<n;i++)
                    {
                        if(item==a[i])
                            {
                            loc=i;
                            break;
                            }
                    }
        if(loc==-1)
            printf("\nAbsent");
        else
            printf("\nPresent at Location: %d",loc);
    printf("\nDo you want to continue? \n Press 0 to exit or any value to continue: ");
    scanf("%d",&c);
    if(c==0)
    return 0;
        }
	return 0;
}
