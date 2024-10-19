// coding is modified to ask options from user
#include <stdio.h>

int main(void) {
    int n; // declaring the required variable
    char choice; // variable to store user choice

    do {
        printf("Enter an integer: ");  // taking input from the user
        scanf("%d", &n);  // storing the user input in a variable

        // checking whether the entered number is even or odd
        if (n % 2 == 0) {
            printf("%d is an even number!\n", n);
        } else {
            printf("%d is an odd number!\n", n);
        }

        // Ask user if they want to continue
        printf("Do you want to check another number? (y/n): ");
        scanf(" %c", &choice); // space before %c to consume any newline character
    } while (choice == 'y' || choice == 'Y');

    printf("process successful\n");
    return 0; // end of main
}

