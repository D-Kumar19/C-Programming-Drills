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

int main(){
    printf("This program will check if a Number is a Perfect Number or not!\n");
    
    int userInput;
    printf("Enter the 'Perfect Number': ");
    scanf("%d", &userInput);


    if (checkPerfectNumber(userInput) == 1){
        printf("%d is a Perfect Number!\n", userInput);
    }
    else{
        printf("%d is not a Perfect Number!\n", userInput);
    }

    return 0;
}