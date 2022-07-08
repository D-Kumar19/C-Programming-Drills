#include <stdio.h>

void findLCM(int* values, int numberOfValues){
    int lcm = 0;
    for(int i = 1; i < numberOfValues; i++){
        int num1 = values[i-1];
        int num2 = values[i];
        
        if(num1 < 0) num1 = num1*-1;
        if(num2 < 0) num2 = num2*-1;
        if(num1 == 0 || num2 == 0){
            printf("\nLCM of 0 is not possible!\n");
            return;
        }
        for (int i = 1; i <= (num1 * num2); i++){
            if (i % num1 == 0 && i % num2 == 0 ){
                lcm = i;
                break;
            }
        }
        values[i] = lcm;
    }
    
    printf("\nLCM of the above values is: %d!", lcm);
}

void getValuesAndFindLCM(int numberOfValues){
    int values[numberOfValues];
    for(int i = 0; i < numberOfValues; i++){
        printf("Enter Values # %d: ", (i+1));
        scanf("%d", &values[i]);
    }
    
    findLCM(values, numberOfValues);
}



int main(){
    printf("This Program will Calculate the LCM of Numbers!\n");
    
    int numberOfValues = 0;
    printf("Enter the Number of values you want to Calculate: ");
    scanf("%d", &numberOfValues);
    
    if(numberOfValues > 1){
        getValuesAndFindLCM(numberOfValues);
    }
    else{
        printf("\nSorry! We can't calculate LCM for less than 2 values!\n");
    }
    
    return 0;
}