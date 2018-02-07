#include <stdio.h>
 
int main()
{
  int array[100], maximum, size, s, location = 1;
 
  printf("Enter the number of elements in array\n");
  scanf("%d", &size);
 
  printf("Enter %d integers\n", size);
 
  for (s = 0; s < size; s++)
    scanf("%d", &array[s]);
 
  maximum = array[0];
 
  for (s = 1; s < size; s++)
  {
    if (array[s] > maximum)
    {
       maximum  = array[s];
       location = s+1;
    }
  }
 
  printf("Maximum element is present at location %d and it's value is %d.\n", location, maximum);
  return 0;
}
