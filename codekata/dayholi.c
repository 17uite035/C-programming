#include <stdio.h>
 
int main() 
{
	char str[50];
	scanf("%s",str);
	if(str[0]=='S' || str[0]=='s')
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
	return 0;
}
