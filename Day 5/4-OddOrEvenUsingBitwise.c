#include <stdio.h>
    
void findEvenOrOdd(int* values, int numberOfValues){
    printf("\n");
    for(int i = 0; i < numberOfValues; i++){
        int num = values[i];
        
        if (num & 1){
            printf("%d is an Odd number!\n", num);
        }
        else{
            printf("%d is an Even number!\n", num);
        }
    }
}

void getValuesAndFindEven(int numberOfValues){
    int values[numberOfValues];
    for(int i = 0; i < numberOfValues; i++){
        printf("Enter Values # %d: ", (i+1));
        scanf("%d", &values[i]);
    }
    
    findEvenOrOdd(values, numberOfValues);
}

int main(){

    printf("This program will find if a Number is Odd or Even using Bitwise Operation!\n");
    
    int numberOfValues = 0;
    printf("Enter the Number of values you want to Check: ");
    scanf("%d", &numberOfValues);
    
    if(numberOfValues > 0){
        getValuesAndFindEven(numberOfValues);
    }
    else{
        printf("\nSorry! We can't calculate Even or Odd for less than 1 values!\n");
    }
    
    return 0;
}