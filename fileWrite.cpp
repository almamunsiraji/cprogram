#include <stdio.h>
int main()
{
   int num;
   FILE *fptr;
   fptr = fopen("d:\\program.txt","w");

for(int i=1;i<=5;i++)
{
   printf("Enter num: ");
   scanf("%d",&num);

   fprintf(fptr,"\n%d",num);
}
   return 0;
}
