#include <stdio.h>
#include <math.h>
#include <string.h>

double cube (double num){
    double result = num * num * num;
    return result;
}

int main(){
    double a;
    double b;

    printf("Enter the first number: ");
    scanf("%lf", &a);

    printf("Enter the second number: ");
    scanf("%lf", &b);

    char arr[7][15] = {"1. Add", "2. Subtract", "3. Divide", "4. Multiply", "5. Exponent"};    
    char operation;
    int selection;


    
    printf("What operation would you like to do? (1-7)\n");
    
    for(int i=0;i<5;i++){
        printf("%s\n", arr[i]);
    }

    scanf("%d", &selection);
    switch(selection){
        case 1:
            double sum = a + b;
            printf("The sum of %lf and %lf is %lf.\n", a, b, sum);
            break; 
        case 2:
            double difference = a - b;
            printf("The difference of %lf and %lf is %lf.\n", a, b, difference);
            break;
        case 3:
            double product = a * b;
            printf("The product of %lf and %lf is %lf.\n", a, b, product);
            break;
        case 4:
            double quotient = a / b;
            printf("The quotient of %lf and %lf is %lf.\n", a, b, quotient);
            break;
        case 5:
            double power = pow(a, b);
            printf("%lf to the power of %lf is %lf.\n", a, b, power);    
            break;
    }


    return 0;
}