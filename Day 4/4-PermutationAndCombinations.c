#include <stdio.h>
#include <stdlib.h>

int getAndValidateN(){
    int n;
    printf("Enter the value of 'N': ");
	scanf("%d", &n);

	while (n <= 0 ){
		printf("The Value you entered is not allowed. Please Re-enter: ");
	    scanf("%d", &n);
	}
	return n;
}

int getAndValidateR(int n){
    int r;
	printf("Enter the Value of R: ");
	scanf("%d", &r);

	while (r < 0 || r > n){

		printf("The value you entered is not allowed. Please Re-enter: ");
	    scanf("%d", &r);
	}
	return r;
}

int getChoice(){
    int choice;
    printf("\n");
    printf("Enter '1' for Permutation!\n");
    printf("Enter '2' for combination!\n"); 
    printf("Enter '3' for both Permutation and Combination!\n");
    printf("Enter you Choice: ");
    scanf("%d", &choice);

	while (choice != 1 && choice != 2 && choice != 3){
		printf("The Choice you entered is not in the List. Please Re-enter: ");
	    scanf("%d", &choice);
	}
	printf("\n");
	return choice;
}

int factorial(int number){
    int factorialOfNumber = 1;
    for (int i = 1; i <= number; i++){
        factorialOfNumber = factorialOfNumber * i;
    }
    return factorialOfNumber;
}

int permutation(int n, int r){
	return factorial(n) / factorial(n - r);
}

int combination(int n, int r){
	int permutation = factorial(n) / factorial(n - r);
	return permutation / factorial(r);
}

int main(){
    
    printf("This program will print the Permutation and Combination using N and R!\n");

	int n, r, choice;
	n = getAndValidateN();
	r = getAndValidateR(n);
	choice = getChoice();
	
	int permutationResult = permutation(n, r);
	int combinationResult = combination(n, r);
	
    switch (choice){
		case 1:
			printf("%dP%d: %d\n", n, r, permutationResult);
			break;
		case 2:
			printf("%dC%d: %d\n", n, r, combinationResult);
			break;
		case 3:
			printf("%dP%d: %d\n", n, r, permutationResult);
			printf("%dC%d: %d\n", n, r, combinationResult);
			break;
	}
	
	return 0;
}