#include <stdio.h>
 
int main()
{
    int k, v, d, s;
    printf("\nEnter Total Number of Terms: \t");
    scanf("%d", &v);
    printf("\nEnter Common Difference: \t ");
    scanf("%d", &d);
    printf("\nArithmetic Sequence From 1 To %d:\n", v);
    for(k = 1; k <= v; k++)
    {
        s = 1 + (k - 1) * d;
        printf("%d \t", s);
    }
    printf("\n\n");
    return 0;
}
