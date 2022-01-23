#include<stdio.h>
int main()
{
   int a[5];
   printf("Enter the values: ");
   for(int i=0;i<5;i++)
   {
        scanf("%d",&a[i]);
   }
   for(int i=0;i<5;i++)
   {
        printf("\narray element in index %d : %d",i,a[i]);
   }
   for(int i= a[i]5-1;i!=-1;i--)
   {     
        printf("\narray element in index %d : %d",i,a[i]);
   }
}