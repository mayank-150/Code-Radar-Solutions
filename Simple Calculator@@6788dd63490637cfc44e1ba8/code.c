#include<stdio.h>
int main()
{
int a,b;
int operator;
scanf("%d %d %d",&a,&b,&operator);
switch(operator)
{
case'+':
printf("%d",a+b);
break;
case'-':
printf("%d",a-b);
break;
case'*':
printf("%d",a*b);
break;
case'/':
printf("%d",a/b);
break;
default:
printf("error");
break;
}
}