#include<stdio.h>
int main()
{
    int a[3],b[3],c[3],i;
    printf("\nEnter the values for first array: ");
    for(i=0;i<3;i++)
    {
        scanf("%d",&a[i]);
    }    
    printf("\nEnter the values for second array: ");    
    for(i=0;i<3;i++)
    {
        scanf("%d",&b[i]);
    }    
    for (i=0;i<3;i++)
    {
        c[i] = a[i] + b[i];
        printf("\nThird array element at index %d is = %d",i,c[i]);
    }    
}