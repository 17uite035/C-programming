#include <stdio.h>
#include<string.h>
int main() 
{
	char str1[50],str2[50];
	int i,j,n,m,count=0;
	scanf("%s %s",str1,str2);
	n=strlen(str1);
	m=strlen(str2);
	if(n==m)
	{
		for(i=0;i<n;i++)
		{
			if(str1[i]==str2[i])
			{
				count=count+0;
			}
			else
			{
				count=count+1;
			}
			
		}
		if(count==1)
		{
			printf("\nyes");
		}
		else
		{
			printf("\nno");
		}
	}
	else
	{
		printf("\nno");
	}
	return 0;
}
