#include<stdio.h>
int main()
{
	char n;
	scanf("%c",&n);
	if(isalpha(n))
	{
		if(n=='a'||n=='A'||n=='e'||n=='E'||n=='i'||n=='I'||n=='o'||n=='O'||n=='u'||n=='U')
		{
			printf("Vowels");
		}
		else
		{
			printf("Consonant");
		}
	}
	else
		printf("invalid");
return 1;
}
