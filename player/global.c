#include<stdio.h>

int count = 0;          // global variable declared

int main(void)

{

   int count = 0;// local variable declared
   do
   {
     int count=0;
     ++count;
     printf("\ncount=%d",count);
   }
    while(++count<=8);
   printf("\ncount=%d",count);
   return 0;

  

}
