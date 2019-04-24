#include <stdio.h>

int main(void)
{
    int x = 25;

    int* y = &x;

    printf("Value of x is %d\n", *y);

    printf("Value of y is %p\n", y);

    int** z = &y;

    printf("Value of z is %p\n", z);

    printf("Value of *z is %p\n", *z);

    printf("Value of **Z is %d\n", **z);


    return 0;
}