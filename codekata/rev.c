#include<stdio.h>
int main()
{
	int num,a,sum=0;
	scanf("%d",&num);
	while(num>0)	
	{
		a=num%10;
		sum=sum*10+a;
		num=num/10;
	}
	printf("%d",sum);
return 0;
}
