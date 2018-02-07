#include <stdio.h>
#include <math.h>
 int main()
{
    int k, sum = 0, rem = 0, cube = 0, temp;
    printf ("enter a number");
    scanf("%d", &k);
    temp = k;
    while (k != 0)
    {
        rem = k % 10;
        cube = pow(rem, 3);
        sum = sum + cube;
        k = k / 10;
    }
    if (sum == temp)
        printf ("The given %d is armstrong number");
    else
        printf ("The given %d is not a armstrong number");
        return 0;
}
