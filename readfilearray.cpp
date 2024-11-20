#include <stdio.h>
main()
{
    FILE *myFile;
    myFile = fopen("somenumbers.txt", "r");
    //read file into array
    int numberArray[100],i;


    for (i =0; i <9; i++)
    {
        fscanf(myFile, "%d", &numberArray[i]);
    }
    for (i = 0; i < 9; i++)
    {
        printf("Number [%d]: %d\n",i, numberArray[i]);
    }
}
