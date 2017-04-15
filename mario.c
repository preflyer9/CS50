#include <cs50.h>
#include <stdio.h>

/*Prints out double half-pyramid of specified height*/
void level(string s, int n);



int main(void)
{
    int h;
    do
    {
        printf("Height: ");       
        h = get_int();
    }
    while (h > 23 || h < 0);

    if (h > 0)
    {
        for (int i = 1; i < h+1; i++)
        {
            level(" ", h-i);
            level("#", i);
            level(" ", 2);
            level("#", i);
            printf("\n");
        }
    }
    else
        level("", 0);
}

void level(string s, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%s", s);
    }
}
