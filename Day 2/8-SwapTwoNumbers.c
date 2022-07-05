#include <stdio.h>
#include <stdlib.h>

void printValues(int number1, int number2){
    printf("The value of first variable is: %d\n", number1);
    printf("The value of second variable is: %d\n", number2);
}

void performIntermediateOperation(int number1, int number2){
    printf("Before Swapping: \n");
    printValues(number1, number2);
    printf("After Swapping: \n");
}

void performSwapUsingTemp(int number1, int number2){
    int temp;
    temp = number1;
    number1 = number2;
    number2 = temp;
    printValues(number1, number2);
}

void performSwapWithoutTemp(int number1, int number2){
    number1 = number1 + number2;
    number2 = number1 - number2;
    number1 = number1 - number2;
    printValues(number1, number2);
}

void performSwapUsingXOR(int number1, int number2){
    number1 = number1 ^ number2;
    number2 = number1 ^ number2;
    number1 = number1 ^ number2;
    printValues(number1, number2);
}

int main(){
    
    printf("This program will Swap values of two Numbers!\n");
    
    int number1, number2;
    printf("Enter first number: ");
    scanf("%d", &number1);
    printf("Enter second number: ");
    scanf("%d", &number2);
    
    printf("\nSwapping using a Temp Variable!\n");
    performIntermediateOperation(number1, number2);
    performSwapUsingTemp(number1, number2);
    
    printf("\nSwapping without a Temp Variable!\n");
    performIntermediateOperation(number1, number2);
    performSwapWithoutTemp(number1, number2);
    
    printf("\nSwapping using XOR!\n");
    performIntermediateOperation(number1, number2);
    performSwapUsingXOR(number1, number2);
    
    return 0;
}