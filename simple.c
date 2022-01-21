#include<stdio.h>
int main()
{
    int a[15],i;
    int even = 0, odd = 0;
    printf("Enter the Values: ");
    for(i=0;i<15;i++)
        scanf("%d",&a[i]);
    for(i=0;i<15;i++)
        printf("\nentered values of index number %d is = %d",i,a[i]);    
    for(i=0;i<15;i++)
        if(a[i] % 2 == 0)
            even++;
        else
            odd++;
    printf("\ntotal number of even numbers is = %d",even);   
    printf("\ntotal number of odd numbers is = %d",odd);   
    return 0;       
}