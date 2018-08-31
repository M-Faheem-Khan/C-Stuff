// Simple factorial calaculator

#include <stdio.h>
#include <stdlib.h>
// functions
int menu();
int factorial();

// main function
void main() {
	menu();
}

// menu function
int menu(){
	// variable
	int menu_option;
	// menu options
	printf("Menu\n");
	printf("1) Calculate Factorial\n");
	printf("2) Quit\n");
	printf(": ");
	// getting menu option from user
	scanf("%d", &menu_option);
	// ----------------------- //
	if (menu_option == 1){
		factorial();
	} else if (menu_option == 2){
		exit(0); // exiting the program 
	} else {
		printf("Enter a valid menu option\n");
		menu();
	}
	return 0;
}

// factorial calculator function
int factorial(){
	// variables
	int number, i;
	int factorial = 1;
	// getting input from user
	printf("Number: ");
	scanf("%d", &number);
	// calulating factorial
	if (number > 0 && number != 0){
		i = number;
		while (i != 1){
			factorial = factorial * i;
			i = i - 1;
		}
		printf("Factorial: %d\n", factorial);
	} else {
		// if the number if negative
		printf("Unable to calculate factorial. Enter a positive number.\n");
	}
	main();
}