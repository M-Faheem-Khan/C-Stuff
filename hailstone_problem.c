// simple hailstone sequence generator
#include <stdio.h>

int main(void) {
    // programming title
    printf("Hailstone Problem\n");

    // declaring variables
    int loop_flag = 3;
    int start_value;
    
    // asking for starting number
    printf("Starting Number: ");
    scanf("%d", &start_value);
    printf("N: %d\n", (start_value));
    
    // the sequence
    // loop_flag = 3
    // if 1,2,4 is found in the sequence(n/start_value) 1 is subtracted
    // so when all three are found that mean we found our sequence
    while(loop_flag != 0){
        // if start_value is even then divide by 2
        if(start_value % 2 == 0){
            start_value = start_value / 2;
        } else {
            // if start_value is odd then multiply by 3 and add 1
            start_value = (3*(start_value)) + 1;
        }
        
        // print the n/sequence value
        printf("N: %d\n", start_value);
        
        // subtracting 1 from loop_flag if 1, 2, 4 if found
        if (start_value == 1){
            loop_flag -= 1;
        } else if (start_value == 2){
            loop_flag -= 1;
        } else if (start_value == 4){
            loop_flag -= 1;
        }
    }
    return 0;
}
