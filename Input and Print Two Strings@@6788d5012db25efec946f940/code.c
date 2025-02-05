#include <stdio.h>

int main() {
    char str1[100], str2[100];
 
    printf("Enter the first string: ");
    scanf("%s", str1);
    
    printf("Enter the second string: ");
    scanf("%s", str2);
    
    printf("You entered:\n");
    printf("First string: %s\n", str1);
    printf("Second string: %s\n", str2);

    return 0;
}
