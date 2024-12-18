#include <stdio.h>

int main() {
  int x = 10;
  int *ptr = &x; // ptr now points to the memory location of x
  *ptr = 20; // Modify the value at the memory location
  printf("%d\n", x); // Output: 20

  //Demonstrates how to allocate memory dynamically and avoid memory leaks.
  int *dynamicPtr = (int *) malloc(sizeof(int));
  if (dynamicPtr == NULL) {
      fprintf(stderr, "Memory allocation failed!\n");
      return 1; // Return an error code
  }
  *dynamicPtr = 30;
  printf("%d\n", *dynamicPtr); // Output: 30
  free(dynamicPtr); // Always free dynamically allocated memory
  dynamicPtr = NULL; // Set pointer to NULL to prevent dangling pointers

  return 0;
} 