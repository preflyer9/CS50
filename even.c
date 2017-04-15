#include <cs50.h>
#include <stdio.h>

int main(void)
{
    printf("Number: ");
    long long cc = get_long_long();
    long long temp = cc;
    double test_var= cc;
    printf("%lld\n%lld\n", temp, cc);                       /**/
    printf("%f\n", test_var);        /**/    
    
    int i = 2;
    do
    {
        temp /= 10;
        i++;
    }
    while (temp > 100);
    printf("cc length: %i\n", i);               /**/
    printf("cc first # is: %lld\n", temp);      /**/
    
    if (i%2 == 0)
    {
        printf("even\n");
        int total = 0;
        long long n = 1000000000000000;
        for (int j = 0; j < 16; j++)
        {
            long long dump = test_var / n;
            if (j%2 == 0)
            {
                switch(dump)
                {
                    case 0:
                        break;
                    case 1:
                        total += 1;
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
            printf("total: %i\n", total);
            test_var -= dump*n;
            n /= 10;
        }
        if (total % 10 == 0)
        {
            printf("VALID\n");
        }
            
        
        
    }
    else
    {
        printf("odd\n");
    }
}
    
    
    
    
    
    
    
    