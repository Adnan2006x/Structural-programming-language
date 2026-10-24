#include<stdio.h>
int main()
{
    int age = 20;
    int *ptr_1 = &age;
    int *ptr_2 ;

    *ptr_2 = *ptr_1;

    printf("The change value of pointer is : %d\n", *ptr_2);

    return 0;
}
