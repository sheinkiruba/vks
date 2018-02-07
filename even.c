#include<stdio.h> 

int main(){

           int v,k,rem,i;

           printf("   Give the First number for the Range :   \n");

           scanf("%d",&v);

           printf("   Give the Final number for the Range :   \n");

           scanf("%d",&k);

           printf("\n The Even numbers between %d and %d are ",v,k); 

           for(i=v; i<=k; ++i){

               rem = i % 2;

               if(rem == 0)

               printf("\n  %d",i);

           }

    return 0; 

    } 
