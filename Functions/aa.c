#include<stdio.h>
void sum(int a, int b){
    printf("Sum is: %d",a+b);
}
void sub(int a, int b){
    printf("Subtraction is: %d",a-b);
}
int main()
{
    sum(10,5);
    sub(10,5);  
}