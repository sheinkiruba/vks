#include <stdio.h>
int main()
{
    int low, high, i, flag;
    printf("Enter two numbers(intervals): ");
    scanf("%d %d", &low, &high);
    printf("Odd numbers between %d and %d are: ", low, high);
    while (low < high)
    {
        flag = 0;
        for(i = 2; i <= low/2; ++i)
        {
            if(low % i == 1)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 1)
            printf("%d ", low);
        ++low;
    }
    return 0;
}
