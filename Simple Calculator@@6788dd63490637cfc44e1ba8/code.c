#include<stdio.h>
int main()
{
int a,b;
char operater;
scanf("%d %d",&a,&b);
switch(operater)
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