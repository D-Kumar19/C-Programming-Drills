#include <stdio.h>

void findHCF(int* values, int numberOfValues){
    int hcf = 0;
    for(int i = 1; i < numberOfValues; i++){
        int num1 = values[i-1];
        int num2 = values[i];
        
        if(num1 < 0) num1 = num1*-1;
        if(num2 < 0) num2 = num2*-1;
        
        if(num2 == 0){
            values[i] = values[i-1];
            continue;
        }
        else if(num1 == 0){
            continue;
        }
        for (int i = 1; i <= (num1 * num2); i++){
            if (num1 % i == 0 && num2 % i == 0 ){
                hcf = i;
            }
        }
        values[i] = hcf;
    }
    
    printf("\nHCF of the above values is: %d!", hcf);
}

void getValuesAndFindHCF(int numberOfValues){
    int values[numberOfValues];
    for(int i = 0; i < numberOfValues; i++){
        printf("Enter Values # %d: ", (i+1));
        scanf("%d", &values[i]);
    }
    
    findHCF(values, numberOfValues);
}



int main(){
    printf("This Program will Calculate the HCF of Numbers!\n");
    
    int numberOfValues = 0;
    printf("Enter the Number of values you want to Calculate: ");
    scanf("%d", &numberOfValues);
    
    if(numberOfValues > 1){
        getValuesAndFindHCF(numberOfValues);
    }
    else{
        printf("\nSorry! We can't calculate HCF for less than 2 values!\n");
    }
    
    return 0;
}