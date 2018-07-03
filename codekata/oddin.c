#include <stdio.h>
int main()
{
	int a,b,result,i;
	scanf("%d",&a);
	scanf("%d",&b);
	for(i=a+1;i<b;i++)
	{
		result = i % 2;
		if(result != 0)
			printf("%d ",i);
	
	}
	
	return 0;
}
