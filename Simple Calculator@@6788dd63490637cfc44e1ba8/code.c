#include<stdio.h>
int main()
{
int a,b;
int operator;
scanf("%d %d %d",&a,&b,&operator);
switch(operator)
{
case'+':
printf("%d+%d=%d",a,b,a+b);
break;
case'-':
printf("%d-%d=%d",a,b,a-b);
break;
case'*':
printf("%d*%d=%d",a,b,a*b);
break;
case'/':
printf("%d/%d",a,b,a/b);
break;
default:
printf("error");
break;
}
}