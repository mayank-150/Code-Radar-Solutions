#include <stdio.h>
int get_nth_bit(int num, int n) {
    return (num >> n) & 1;
int main()
{
int a,b;
scanf("%d %d",&a,&b);
int bit=(a,b);
printf("%d",bit);
}