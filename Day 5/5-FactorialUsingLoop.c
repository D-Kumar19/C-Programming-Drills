#include <stdio.h>

void findFactorialUsingFor(int n){
    int fact = 1;
    for (int i = 1; i <= n; i++){
        fact = fact * i;
    }

    printf("\nThe Factorial of the number %d using For Loop is: %d\n", n, fact);
}

void findFactorialUsingWhile(int n){
    int fact = 1, i = 1;
     while (i <= n){
        if (n == 0){
            break;
        }

        fact = fact * i;
        i++;  
    }
    
    printf("The Factorial of the number %d using While Loop is: %d\n", n, fact);  
}


void findFactorialUsingDoWhile(int n){
    int fact = 1, i = 1;
    do{
        if (n == 0){
            break;
        }

        fact = fact * i;
        i++;  
    }
    while (i <= n);

    printf("The Factorial of the number %d using Do While Loop is: %d\n", n, fact);  
}

int main(){
    printf("This Program will Calculate Factorial of a Number using different Loops!\n");

    int n;
    printf("Enter the Number for Factorial: ");
    scanf("%d", &n);
    
    if(n < 0){
        printf("\nFactorial of Negative Number is undefined!\n");
    }
    else if(n >= 0){
        findFactorialUsingFor(n);
        findFactorialUsingWhile(n);
        findFactorialUsingDoWhile(n);
    }
    
    return 0;
}