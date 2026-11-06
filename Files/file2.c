#include <stdio.h>
int main() {


FILE *fptr;

// Open a file in read mode
fptr = fopen("loremipsum.txt", "r");

// Print some text if the file does not exist
if (fptr == NULL) {
  printf("Not able to open the file.");
} else {
  // Close the file (only if it was opened)
  fclose(fptr);
}
return 0;
}