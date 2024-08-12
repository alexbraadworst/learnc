#include <stdio.h>

int main(){
    const double pi = 3.14159;
    double radius;
    double circumference;

    printf("Enter your circle's radius: ");
    scanf("%lf", &radius);

    circumference = 2 * pi * radius;

    printf("The circumference of your circle is %lf\n", circumference);


    return 0;
}