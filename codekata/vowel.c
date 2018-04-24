#include<stdio.h>
int main()
{
	char vowel;
	scanf("%c",&vowel);
	switch(vowel)
	{
		case 'a':
		case 'A':
		case 'e':
		case 'E':		
		case 'i':
		case 'I':
		case 'o':
		case 'O':
		case 'u':
		case 'U':
			printf("Vowel");
			break;
		default:
			printf("consonant");
	}
	return 0;
}
