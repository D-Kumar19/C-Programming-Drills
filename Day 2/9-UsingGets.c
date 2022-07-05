#include <stdio.h>

int main(){
    printf("This program is about Implementation of gets!\n");
    
    char name[50];
    printf("Enter you name: ");
    gets(name); // Deprecated so avoid using it!
    // scanf("%[^\n]*c", name); // This works perfectly as well!
    printf("Your name is: %s", name);
    
    return 0;
}