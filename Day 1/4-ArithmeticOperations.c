#include <stdio.h>
#include <stdlib.h>

int main(){
    printf("This program will do the Arithmetic Opearations!\n");

    int num1, num2;
    printf("Enter First Number: ");
    scanf("%d", &num1);
    printf("Enter Second Number: ");
    scanf("%d", &num2);
    
    printf("The Sum of %d and %d is: %d\n", num1, num2, num1 + num2);
    printf("The difference of %d and %d is %d\n", num1, num2,  num1 - num2);
    printf("The multiplication of %d and %d is %d\n",  num1, num2, num1 * num2);
    printf("The division of %d and %d is %lf\n",  num1, num2, num1 / (float) num2);

    return 0;
}