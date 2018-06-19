#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
	if(N<0)
		printf("invalid");
    else if(N%2==0)
	printf("Even");
    else if(N%2!=0)
     	printf("Odd");
      
    return 0;
}
