#include <stdio.h>

char checkIfStringEquals(char *firstInput, char *secondInput){
    int index = -1;
    while(firstInput[index++] != '\0'){
        if(firstInput[index] != secondInput[index]){
            return 0;
        }
    }
    if(secondInput[index] != '\n') return 0;
    return 1;
}

int main(){
    printf("This Program will compare two Strings inputted by User if they Match or not!\n");
    
    const int INPUT_SIZE = 30;
    char firstInput[INPUT_SIZE], secondInput[INPUT_SIZE];
    
    printf("Enter first String: ");
    fgets(firstInput, INPUT_SIZE, stdin);
    printf("Enter second String: ");
    fgets(secondInput, INPUT_SIZE, stdin);
    
    printf("The first String you Inputted is: %s", firstInput);
    printf("The second String you Inputted is: %s", secondInput);
    
    if(checkIfStringEquals(firstInput, secondInput)){
        printf("Both String matches!");
    }
    else{
        printf("Both String doesn't match!");
    }
   
    return 0;
}