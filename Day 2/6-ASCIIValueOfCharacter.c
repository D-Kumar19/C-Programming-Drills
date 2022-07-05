#include <stdio.h>
#include <stdlib.h>

int main(){
    printf("This program will print the ASCII value of a Characer entered!\n");
    
    char character;
    printf("Enter a Character: ");
    scanf("%c", &character);

    printf("The ASCII value of the Character %c is: %d", character, character);
    
    return 0;
}