#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int calculateExponentiation(int base, int exponent){
    int power = 1;
    while (exponent-- > 0){
        power *= base;
    }
    return power;
}

float calculateExponentiationForNegative(int base, int exponent){
    float power = 1;
    while (exponent++ < 0){
        power /= base;
    }
    return power;
}

float calculatePowerForFloatingBase(float base, int exponent){
    float power = 1.0;
    while (exponent-- > 0){
        power *= base;
    }
    return power;
}

float calculatePowerForFloatingBaseNegative(float base, int exponent){
    float power = 1.0;
    while (exponent++ < 0){
        power /= base;
    }
    return power;
}

int main(){

    printf("This program will calculate the power using base and exponent given by user!\n");    

    int base, exponent;
    printf("Enter the Base: ");
    scanf("%d", &base);

    printf("Enter the Exponent: ");
    scanf("%d", &exponent);

    
    if(exponent >= 0){
        int result1, result2;
        result1 = calculateExponentiation( base, exponent );
        result2 = pow(base, exponent);

        printf("The Power of the entered number is %d\n", result1);
        printf("The Power of the entered number by other way is %d\n", result2);
    }
    else{

        float result;
        result = calculateExponentiationForNegative(base, exponent);
        printf("The Power of the entered number is %f\n", result);
    }
    

    printf("\nThis will Calculate the Power if the Base is a decimal number!\n");
    float floatingBase;
    exponent = 0;

    printf("Enter the Base: ");
    scanf("%f", &floatingBase);

    printf("Enter the Exponent: ");
    scanf("%d", &exponent);


    if(exponent >= 0){

        printf("The answer of the %f ^ %d is: %0.3f\n", floatingBase, exponent, pow(floatingBase, exponent));
        printf("By other way the answer of the %f ^ %d is: %0.3f\n", floatingBase, exponent, calculatePowerForFloatingBase(floatingBase, exponent));
    }
    else{
        printf("The answer of the %f ^ %d is: %0.3f\n", floatingBase, exponent, pow(floatingBase, exponent));
        printf("By other way the answer of the %f ^ %d is: %0.3f\n", floatingBase, exponent, calculatePowerForFloatingBaseNegative(floatingBase, exponent));
    }

    return 0;
}