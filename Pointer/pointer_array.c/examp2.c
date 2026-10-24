#include<stdio.h>
int main()
{
    int age[5] = {10 , 11 , 12 , 13 , 14 };
    int *ptr = &age[0] ;

    printf("The value of array 1st element :%d\n\n",*ptr);

    for(int i=0 ; i<5 ; i++)
    {
        printf("The value of array's %dst element is : %d\n" , i+1 , *ptr);
        ptr++;
    }

    return 0;
}
