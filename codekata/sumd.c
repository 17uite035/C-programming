#include <stdio.h>
 
int main() 
{
	int num,sum=0,a,sq;
	printf("Enter the number:");
	scanf("%d",&num);
	while(num>0)
	{
		a=num%10;
		sq=a*a;
		sum=sum+sq;
		num=num/10;
	}
	printf("%d",sum);
	return 0;
}
