// Calcuating Average using array

// total execution time: 0.000896

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	clock_t begin = clock();
	// variables
	int array_length, j, total = 0;


	// getting number of enteries / the length of array
	printf("Number of enteries: ");
	scanf("%d", &array_length);

	// array variable
	int avg_array[array_length];

	// append the values to the array
	for (j = 0; j < array_length; j++){
		printf("%d = ", (j+1));
		scanf("%d", &avg_array[j]);
	}

	// getting the total of all the values
	for (j = 0; j < array_length; j++){
		total += avg_array[j]; 
	}

	// printing the total
	printf("%d\n", (total/array_length));

	clock_t end = clock();
	double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
	printf("%lf\n", time_spent);
}
