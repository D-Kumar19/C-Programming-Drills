#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void simpleInterest(){
    float principleAmount, getTime, getRate, simpleInterestAmount;
    printf("Enter Values for the Simple Interest\n");
    
    printf("Enter Principle Amount: ");
    scanf("%f", &principleAmount);
    printf("Enter Time: ");
    scanf("%f", &getTime);
    printf("Enter Rate: ");
    scanf("%f", &getRate);
    
    simpleInterestAmount = principleAmount + (principleAmount * getRate * getTime)/100.0;
    printf("The Amount of Simple Interest is %.5lf \n", simpleInterestAmount);
}

void compoundInterest(){

    float principleAmount, getTime, getRate, compoundInterestAmount;
    printf("\nEnter Values for the Compound Interest\n");
    
    printf("Enter Principle Amount: ");
    scanf("%f", &principleAmount);
    printf("Enter Time: ");
    scanf("%f", &getTime);
    printf("Enter Rate: ");
    scanf("%f", &getRate);
    
    compoundInterestAmount = principleAmount * pow((1+getRate/100), getTime);
    printf("The Amount of Compound Interest is: %.2lf!", compoundInterestAmount);
}

int main(){
    printf("This Calculator will calculate Simple Interest and Compound Interest!\n");
    printf("Enter '1' for Simple Interest!\n");
    printf("Enter '2' for Compound Interest!\n");
    printf("Enter Choice: ");
    int choice = 0;
    scanf("%d", &choice);
    
    if(choice == 1){
        simpleInterest();
    }
    else if(choice == 2){
        compoundInterest();
    }
    else{
        printf("Invalid Choice!");
    }
    
    return 0;
}