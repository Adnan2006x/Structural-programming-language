#include<stdio.h>
int main()
{
    int age = 20;
    int *ptr ;
    
    ptr = &age;

    printf("The value of pointer : %d\n",*ptr);

    return 0;
}
