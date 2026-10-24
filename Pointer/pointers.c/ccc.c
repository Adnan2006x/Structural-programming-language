#include <stdio.h>
int main() {

int myAge = 43;     // Variable declaration
int* ptr = &myAge;  // Pointer declaration

// Change the value of myAge with the pointer
*ptr = 50;

// Output the new value of myAge (50)
printf("%d\n", myAge);
return 0;
}