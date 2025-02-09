#include <stdio.h>
int get_nth_bit(int a, int b) {
    return (a >> b) & 1;}
int main()
{
int a,b;
scanf("%d %d",&a,&b);
int bit=get_nth_bit(a,b);
printf("%d",bit);
}