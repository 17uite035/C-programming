#include<stdio.h>
int main()
{
        int a,b,i;
        int c=0;
        printf("enter the  numbers");
        scanf("%d",&a);
        printf("enter the number");
        scanf("%d",&b);
        for(i=1;i<=b;i++)
        {
                c+=a;
        }
        printf("%d",c);
     return 0;
}
