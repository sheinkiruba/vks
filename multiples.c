# include <stdio.h> 
int main() 
{ 
 int i, k, v ; 
 printf("Enter the limit : ") ; 
 scanf("%d", &k) ; 
 printf("\nEnter the number : ") ; 
 scanf("%d", &v) ; 
 printf("\nThe numbers divisible by %d are :\n\n", v) ; 
 for(i = 1 ; i <= k ; i++) 
  if(i % v == 0) 
   printf("%d\t", i) ; 
 return 0 ; 
}
