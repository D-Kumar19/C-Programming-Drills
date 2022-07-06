#include <stdio.h>

int main(){
    
    printf("This program will Calculate the amount of Tax you need to Pay!\n");
    printf("The Tax will be calculated using the slabs mentioned below!\n");
    printf("2.5 Lakhs - 5.0 Lakhs --> 5 Percent!\n");
    printf("5.0 Lakhs - 10.0 Lakhs --> 20 Percent!\n");
    printf("Above 10.0 Lakhs --> 30 Percent!\n");
    
    float tax = 0, income = 0;
    printf("Enter your Income: ");
    scanf("%f", &income);
    
    if (income >= 250000 && income <= 500000){
        tax = 0.05 * (income - 250000);
    }  
    else if (income >= 500000 && income <= 1000000){
        tax = 0.2 * (income - 500000);
    }  
    else if (income >= 1000000){
        tax = 0.3 * (income - 1000000);
    }

    printf("The amount of Tax you need to pay for %0.3f is: %0.3f", income, tax);
    
    return 0;
}