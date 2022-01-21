#include<stdio.h>
int main()
{
   int a[5],i;
   printf("Enter the values: ");
   for(i=0;i<5;i++)
       scanf("%d",&a[i]);
   for(i=0;i<5;i++) 
        printf("\narray element in index %d : %d",i,a[i]);
   for(i-4;i>=0;i--)
        printf("\narray element in index %d : %d",i,a[i]);
}