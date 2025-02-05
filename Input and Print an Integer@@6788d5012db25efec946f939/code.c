#include <stdio.h>

int main() {
    int num;  // Variable to store the integer

    // Prompt the user
    printf("Enter an integer: ");

    // Read the integer input
    if (scanf("%d", &num) != 1) {  // Check if input is valid
        printf("Invalid input! Please enter a valid integer.\n");
        return 1;  // Exit with an error code
    }

    // Print the integer as a character
    printf("Character representation: %c\n", num);

    return 0;
}
