#include<stdio.h>

char fun(); //function declaration

void main()
{
    char ch;
    ch=fun();
    printf("entered character= %c",ch);
    
}

char fun()
{
    char character;
    printf("Enter the character : ");
    scanf("%c",&character);
    return character;
    
}