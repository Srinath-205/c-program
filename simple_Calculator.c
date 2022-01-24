#include<stdio.h>
 int main()
 {
     char operator;
     int num1,num2;

     printf("Choose the operator(+,-,*,/,%%): ");
     scanf("%c",&operator);

     printf("Enter two numbers: ");
     scanf("%d %d",&num1,&num2);

     switch(operator)
     {
       case '+':
         printf("%d + %d =\t%d\n",num1,num2,num1+num2); 
         break;
       case '-':
         printf("%d - %d =\t%d\n",num1,num2,num1-num2);
         break;
       case '*':
         printf("%d * %d =\t%d\n",num1,num2,num1*num2);
         break;
       case '/':
         printf("%d / %d =\t%d\n",num1,num2,num1/num2);
         break;
       case '%':
         printf("%d %% %d =\t%d\n",num1,num2,num1%num2);
         break;
       default:
         printf("Error! Invalid Operator.");
     }

     return 0;
 }