#include <cs50.h>
#include <stdio.h>

int ten_factor(long long test_var);
int main(void)
{
    printf("Number: ");
    long long cc = get_long_long();
    long long temp = cc;
    long long test_var= cc;

    int i = 2;
    do
    {
        temp /= 10;
        i++;
    }
    while (temp > 100);
    
    int total = 0;
    long long n = 1;
    for (int k = 1; k < i; k++)
    {
        n *= 10;
    }
    
    if (i % 2 == 0)
    {
        for (int j = 0; j < i; j++)
        {
            long long dump = test_var / n;
            if (j%2 == 0)
            {
                switch(dump)
                {
                    case 0:
                        break;
                    case 1:
                        total += 2;
                        break;
                    case 2:
                        total += 4;
                        break;
                    case 3:
                        total += 6;
                        break;
                    case 4:
                        total += 8;
                        break;
                    case 5:
                        total += 1;
                        break;
                    case 6:
                        total += 3;
                        break;
                    case 7:
                        total += 5;
                        break;
                    case 8:
                        total += 7;
                        break;
                    case 9:
                        total += 9;
                        break;
                }
            }
            else
            {
                total += dump;
            }
            test_var -= dump*n;
            n /= 10;
        }
    }
    
    else
    {
        for (int j = 0; j < i; j++)
        {
            long long dump = test_var / n;
            if (j%2 != 0)
            {
                switch(dump)
                {
                    case 0:
                        break;
                    case 1:
                        total += 2;
                        break;
                    case 2:
                        total += 4;
                        break;
                    case 3:
                        total += 6;
                        break;
                    case 4:
                        total += 8;
                        break;
                    case 5:
                        total += 1;
                        break;
                    case 6:
                        total += 3;
                        break;
                    case 7:
                        total += 5;
                        break;
                    case 8:
                        total += 7;
                        break;
                    case 9:
                        total += 9;
                        break;
                }
            }
            else
            {
                total += dump;
            }
            test_var -= dump*n;
            n /= 10;
        }
    }

    if (total % 10 != 0)
    {
        printf("INVALID\n");
    }
    
    else
    {
        switch(i)
        {
            case 15:
                if (temp == 34 || temp == 37)
                {
                    printf("AMEX\n");
                }
                else
                {
                    printf("INVALID\n");
                }
                break;
            case 13:
                if (temp/10 == 4)
                {
                    printf("VISA\n");
                }
                else
                {
                    printf("INVALID\n");
                }
                break;
            case 16:
                if (temp/10 == 4)
                {
                    printf("VISA\n");
                }
                else if (temp == 51 || temp == 52 || temp == 53 || temp == 54 || temp == 55)
                {
                    printf("MASTERCARD\n");
                }
                else
                {
                    printf("INVALID\n");
                }
                break;
            default:
                printf("INVALID\n");
                break;
        }

        
    }
}
