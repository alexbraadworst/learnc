#include <stdio.h>

// Write a program that allows the user to input a number and return a list of its prime factors

int main(){
    int n;

    printf("Please enter a number: ");
    scanf("%d", &n);
    
    // checks if the number divides by 2 then divides by 2

    while (n % 2 == 0){
        printf("%d\n", 2);
        n = n / 2;
    }

    // rule: every composite number has a prime factor that is less than the square root of itself
    // this initializes i as 3, checks if it is less or equal to the square root of n, then increments up by 2
    // keeps dividing n by i until it goes down to 1 or to a prime number

    for (int i = 3; i * i <= n; i = i + 2){
        while (n % i == 0){
            printf("%d\n", i);
            n = n / i;
        }
    }
}