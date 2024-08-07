#include <stdio.h>
#include <cs50.h>


int main(void)
{
    // Prompt for x
    float x = get_float("x: ");

    // Prompt for y
    float y = get_float("y: ");

    // Devide x by y
    float z = x / y;

    // perform addition
    printf("%f\n", z);

}
