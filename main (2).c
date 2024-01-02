#include <stdio.h> // Include the standard input/output header file.

int main() {
   int i, j, r; // Declare variables for loop control and the number of rows.

   // Prompt the user to input the number of rows.
   printf("Input number of rows (half of the diamond): ");
   scanf("%d", &r); // Read the number of rows from the user.

   // Loop to print the upper half of the diamond.
   for (i = 0; i <= r; i++) {
      // Loop to print spaces before the asterisks.
      for (j = 1; j <= r - i; j++)
         printf(" ");

      // Loop to print asterisks.
      for (j = 1; j <= 2 * i - 1; j++)
         printf("*");

      printf("\n"); // Move to the next line after completing a row.
   }

   // Loop to print the lower half of the diamond.
   for (i = r - 1; i >= 1; i--) {
      // Loop to print spaces before the asterisks.
      for (j = 1; j <= r - i; j++)
         printf(" ");

      // Loop to print asterisks.
      for (j = 1; j <= 2 * i - 1; j++)
         printf("*");

      printf("\n"); // Move to the next line after completing a row.
   }

   return 0; // Return 0 to indicate successful execution.
}

