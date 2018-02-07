#include <stdio.h>
int main()
{
    int arr[5]={1,2,3,4,5,};
    int i, n, sum=0;
    printf("Enter value to be added: ");
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(i=0; i<n; i++)
    {
        sum = sum + arr[i];
    }
    printf("Sum of all elements of array = %d", sum);
    return 0;
}
