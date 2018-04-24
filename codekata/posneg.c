#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    if(N<0)
      printf("Negative");
    else if(N>0)
      printf("Positive");
    else if(N==0)
      printf("zero");
    else
      printf("The given input is invalid");
      
    return 0;
}
