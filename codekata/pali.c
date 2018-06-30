#include<stdio.h>
int main()
{
	int a,n,sum=0;
	int t;
	scanf("%d",&a);
	t=a;
	while(a>0)
	{
		n=a%10;
		sum=sum*10+n;
		a=a/10;
	}
	if(t==sum)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
return 0;
}
