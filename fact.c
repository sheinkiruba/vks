#include <stdio.h>
int main()
{
    int s, i;
    unsigned long long factorial = 1;
    printf("Enter an integer: ");
    scanf("%d",&s);
    if (s < 0)
        printf("Error! Factorial of a negative number doesn't exist.");
    else
    {
        for(i=1; i<=s; ++i)
        {
            factorial *= i;             
        }
        printf("Factorial of %d = %llu", s, factorial);
    }
    return 0;
}
