#include<stdio.h>
int main()
{
int i,j,k,n;
scanf("%d",&n);
for(i=1;i<=n;i++)
{
for(j=1;j<=i;j++)
{
printf(" ");
}
for(k=1;k<=i;k++)
{
printf("*");
}
for(k=2;k<=i;k++)
{
printf("*");
}
printf("\n");
}
}