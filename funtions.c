#include<stdio.h>

void age()
{
    int age;
    printf("Enter your age:");
    scanf("%d",&age);
    if(age>=18)
    {
        printf("eligible");
    }
    else
    {
        printf("not eligible");
    }
}

void main()
{
    age();
}