#include<stdio.h>
double pow_function(double base, int exponent);
int main(){ 
    double base,result;
    int exponent;
    printf("Enter the base= ");
    scanf("%lf",&base);
    printf("Enter the exponent= ");
    scanf("%d",&exponent);
    printf("%lf",pow_function(base,exponent));
    
    return 0;
}
double pow_function(double base, int exponent){
    int i;
    double result=1.0;
    if(exponent<0){
        base=1/base;
        exponent=-exponent;
    }
    for(i=0;i<exponent;i++){
        result=result*base;
    }
    return result;

}