#include<stdio.h>
int main()
{
        int a,b;
        int counter=0;
        printf("enter the numbers");
        scanf("%d%d",&a,&b);
        while((a-b)>=0)
        {
                counter++;
                a-=b;
        }
        printf("%d\n",counter);
        printf("%d",a);

        return 0;
}
                                                                                                                                                     
                                                                                                                                                     
                                                                                                                                                     
