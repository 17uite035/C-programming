#include<stdio.h>
int main()
{
  int a,i,j,t,s=0;
  printf("enter the value:");
  scanf("%d",&a);
  for(i=0;i<4;i++)
  {
    t=a;
    for(j=0;j<i;j++)
    {
      t=t*10+a;
    }
    s=s+t;
 }
    printf("%d",s);
    return 0;
}
