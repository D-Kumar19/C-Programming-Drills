#include <stdio.h>

void positiveMultiplication(int n){
    int i = 1;
    long multiplicationOfNumbers = 1;
    do{
        multiplicationOfNumbers *= i;
        printf("Num: %d and Multiplication is: %ld\n", i, multiplicationOfNumbers);
        i++;
    }while(i <= n);
    printf("\nMultiplication of first '%d' terms is: %ld\n", n, multiplicationOfNumbers);
}

void negativeMultiplication(int n){
    int i = -1;
    long multiplicationOfNumbers = 1;
    do{
        multiplicationOfNumbers *= i;
        printf("Num: %d and Multiplication is: %ld\n", i, multiplicationOfNumbers);
        i--;
    }while(n <= i);
    printf("\nMultiplication of first '%d' terms is: %ld\n", n, multiplicationOfNumbers);
}

int main(){

    printf("This Program will Calculate the Product of first 'n' numbers.\n");
    
    int n;
    printf("Enter the Limit 'n': ");
    scanf("%d", &n);
    
    if(n > 0){
        positiveMultiplication(n);
    }
    else if(n < 0){
        negativeMultiplication(n);
    }
    else{
       printf("\nMultiplication of first '0' terms is: '0'\n"); 
    }
    
    return 0;
}