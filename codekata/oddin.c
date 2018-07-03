#include <stdio.h>
int main()
{
	int a,b,result,i;
	printf("Enter the lowest limit :");
	scanf("%d",&a);
	printf("Enter the highest limit :");
	scanf("%d",&b);
	for(i=a+1;i<b;i++)
	{
		result = i % 2;
		if(result != 0)
			printf("%d ",i);
	
	}
	
	return 0;
}
