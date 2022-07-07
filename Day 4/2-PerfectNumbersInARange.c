#include <stdio.h>

int checkPerfectNumber(int userInput){
    int sumOfDivisors = 0;
    for (int i = 1; i <= userInput/2; i++){
        if (userInput % i == 0){
            sumOfDivisors = sumOfDivisors + i;
        }
    }
    return sumOfDivisors == userInput;
}

void printPerfectNumber(int lowerLimitCopy, int lowerLimit, int upperLimit){
    int perfectNumbers = 0;
    for(int i = lowerLimitCopy; i <= upperLimit; i++){
        if(checkPerfectNumber(i) == 1){
            printf("%d is a Perfect Number!\n", i);
            perfectNumbers++;
        }
    }
    
    if (perfectNumbers > 0){
        printf("There were %d Perfect Numbers between %d and %d!\n", perfectNumbers, lowerLimit, upperLimit);
    }
    else if (perfectNumbers == 0){
        printf("There are no perfectNumbers between %d and %d!\n", lowerLimit, upperLimit);
    }
}

int main(){
    
    printf("This program will output Perfect Number between two ranges!\n");
    
    int lowerLimit = 0, upperLimit = 0, lowerLimitCopy = 0;
    printf("Enter the 'Lower Limit': ");
    scanf("%d", &lowerLimit);
    printf("Enter the 'Upper Limit': ");
    scanf("%d", &upperLimit);
    
    if(lowerLimit > upperLimit){
        printf("Input mismatch as Lower Limit is greater than Upper Limit!");
        return 0;
    }
    else if(upperLimit <= 0){
        printf("Input mismatch as Upper Limit is Negative!");
        return 0;
    }
    
    if(lowerLimit < 0){
        lowerLimitCopy = 1;
    }
    else{
        lowerLimitCopy = lowerLimit;
    }
    printPerfectNumber(lowerLimitCopy, lowerLimit, upperLimit);

    return 0;
}