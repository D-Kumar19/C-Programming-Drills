#include <stdio.h>
#include <ctype.h>

int main(){
    printf("This program will print the Reverse Case of an Alphabetic Character that you will add!\n");
    
    char character;
    printf("Enter the Character: ");
    scanf("%c", &character);

    if (character >= 97 && character <= 122){
        printf("The Upper Case of %c is: %c", character, toupper(character));
    }
    else if (character >= 65 && character <= 90){
        printf("The Lower Case of %c is: %c", character, tolower(character));
    }
    else{
        printf("This is not an Alphabetic Character!");
    }
    
    return 0;
}  