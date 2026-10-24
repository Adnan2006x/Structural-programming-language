#include <stdio.h>
int main() {
    int myNumbers[3] = {10, 20, 30};
    int *p = myNumbers;  // myNumbers[0]

printf("%d\n", *p); // 10
p++;           // move to myNumbers[1]
printf("%d\n", *p); // 20
p--;           // back to myNumbers[0]
printf("%d\n", *p); // 10

p += 2;        // jump to myNumbers[2]
printf("%d\n", *p); // 30

return 0;
}