#include <stdio.h>

int findCoFactors(int limit, int num1, int num2){
    int coFactors = 0;
    printf("\n");
    for (int i = 2; i <= limit; i++){
        if (num1 % i == 0 && num2 % i == 0){
            printf("They have a similiar factor which is: %d!\n", i);
            coFactors++;
        }
    }
    return coFactors;
}

int main(){

    printf("In this program I will check if two Numbers are Co-Prime or not!\n");
    
    int num1 = 0, num2 = 0;
    printf("Enter the 'First Number': ");
    scanf("%d", &num1);
    printf("Enter the 'Second Number': ");
    scanf("%d", &num2);
    
    if(num1 < 2 || num2 < 2){
        printf("\nFor a Number to be Co-Prime, it should be greater than 2!\n");
    }
    else{
        int limit = num1 > num2 ? num1 : num2;
        int coFactors = findCoFactors(limit, num1, num2);
    
        if (coFactors == 0){
            printf("%d and %d are Co-Prime Numbers!\n", num1, num2);
        } 
        else {
            printf("%d and %d are not Co-Prime Numbers!\n", num1, num2);
        }
    }

    return 0;
}