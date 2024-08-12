#include <stdio.h>
#include <math.h>

int main(){
    
    double a;
    double b;
    double c;
    
    printf("Please enter the length of side a: ");
    scanf("%lf", &a);

    printf("Please enter the length of side b: ");
    scanf("%lf", &b);

    c = sqrt(a*a + b*b);

    printf("The length of the hypotenuse is %lf", c);

    return 0;
}