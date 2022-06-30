#include <stdio.h>
#include <stdlib.h>

int main(){

    printf("This program will add two number after getting them from the user.\n");

    int num1, num2, sum;
    printf("Enter number 1: ");
    scanf("%d", &num1);
    printf("Enter number 2: ");
    scanf("%d", &num2);

    sum = num1 + num2;
    printf("The sum of %d and %d is: %d", num1, num2, sum);
    
    return 0;
}