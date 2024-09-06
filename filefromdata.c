#include<stdio.h>
int main()
{
    FILE*myFile;
    myFile=fopen("c:\\file.txt", "r");
    int a[1000],i;
    for(i=0;i<6;i++){
        fscanf(myFile, "%d", &a[i]);
    }
    for(i=0;i<6;i++)
    {
        printf("a[%d] = %d",i,a[i]);
    }
}