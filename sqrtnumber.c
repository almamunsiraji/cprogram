#include<stdio.h>
#include<math.h>
double sqrt_number(double number);
int main(){
    int number;
    
    printf("Enter the number: ");
    scanf("%d",&number);
    printf("%lf",sqrt_number(number));
    return 0;
}
double sqrt_number(double number){
    if(number<0){
        return -1;
    }
  return sqrt(number);
}
