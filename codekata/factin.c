#include<stdio.h>
int main()
{
    int fact=1,a,i;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        fact=fact*i;
    }
    printf("%d",fact);
}
