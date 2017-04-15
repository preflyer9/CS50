#include <cs50.h>
#include <stdio.h>

/* Converts time in shower to equivilent bottles of drinking water*/

int main(void)
{
    printf("Shower length (minutes): ");
    int m = get_int();
    printf("Minutes: %i\nBottles: %i\n", m, m * 12);
}