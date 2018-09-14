#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string myName = "Liz";
    printf("hello, %s\n", myName);

    // prompt the user for x
    int x = get_float("Int x ");
    // prompt the user for y
    int y = get_float("Int y ");

    //perform arithmetic
    printf("x + y = %i\n", x + y);
    printf("x - y = %i\n", x - y);
    printf("x * y = %i\n", x * y);
    printf("x / y = %i\n", x / y);
   // printf("x mod y = %i\n", x mod y);
}