#include<stdio.h>
int main()
{
	int a,n,count=1;
	scanf("%d",&a);
	n=a;
	while(a!=0)
	{
		a=a/10;
		if(a!=0)
		count++;
	}
	printf("%d",count);
return 0;	
}
