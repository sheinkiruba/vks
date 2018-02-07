#include <stdio.h>
int main()
{
    int v, k, i, flag;
    printf("Enter two numbers(intervals): ");
    scanf("%d %d", &v, &k);
    printf("Prime numbers between %d and %d are: ", v, k);
    while (v < k)
    {
        flag = 0;
        for(i = 2; i <= v/2; ++i)
        {
            if(v % i == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
            printf("%d ",v);
        ++v;
    }
    return 0;
}
