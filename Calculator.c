#include<stdio.h>

int main()
{   int a,b;
    printf("enter the first number");
    scanf("%d",&a);
    printf("\nenter the second number");
    scanf("%d",&b);
    printf("\nenter the operation (+-/*)");
    char c;
    scanf(" %c",&c);
      switch (c){
    case '+':
            printf("output ic %d",a+b);
    break;

case '-':
        printf("output ic %d",a-b);
    break;
case '*':
        printf("output ic %d",a*b);
    break;
case '/':

        printf("output ic %d",a/b);
        }
   return 0;}

