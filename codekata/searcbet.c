#include<stdio.h>
#include<string.h>
int main()
{
	int l,r,n;
	scanf("%d",&n);
	scanf("%d%d",&l,&r);
	if((l<=n)&&(r>=n))
		printf("yes");
	else
		printf("no");
return 0;
}
