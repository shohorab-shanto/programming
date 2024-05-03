#include<stdio.h>
int main(){
    int a, b;
   printf("Enter two integers: ");
    if (scanf("%d %d", &a, &b) == 2) {
        // Output the input values
        printf("input = %d %d\n", a, b);
        
        // Perform arithmetic operations and output the results
        printf("%d + %d = %d\n", a, b, a + b);
        printf("%d - %d = %d\n", a, b, a - b);
        printf("%d * %d = %d\n", a, b, a * b);

        // Check if 'b' is not zero to avoid division by zero
        if (b != 0)
            printf("%d / %d = %.1f\n", a, b, (float)a / b);
        else
            printf("Cannot divide by zero.\n");
    } else {
        // Print a message if no input was provided
        printf("No input provided.\n");
    }

    return 0;

}