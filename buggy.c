#include <stdio.h>
#include <cs50.h>

int get_negative_int(void);

int main(void)
{
    int j = get_negative_int();
    printf("%i\n", j);
    for (int i = 0; i < 3; i++)
    {
        printf("#\n");
    }
}


int get_negative_int(void)
{
    int n;
    do
    {
        n = get_int("negative number: ");
    } while (n >= 0);
    return n;
    
}