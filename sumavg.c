#include<stdio.h>
int main()
{
    int marks[5],i;
    int sum =0;
    float avg;
    printf("Enter the marks of five students: ");
    for(i=0;i<5;i++)
        scanf("%d",&marks[i]);
    for(i=0;i<5;i++)
        sum = sum + marks[i];
    printf("\nsum = %d",sum);
    avg = sum / 5;
    printf("\naverage of %d = %f",sum,avg);    
}