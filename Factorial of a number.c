#include<stdio.h>

int main()
{
  int n;
  int factorial=1;
  
  printf("enter a number:\n);
  scanf("%d",&n);
         
  if(n<0)
         printf("negative nubers have no factorial");
  else
         {
           for(i=1;i<=n;++i)
           {
             factorial = factorial*i;
           }
           printf("factorial of %d = %d",n,factorial);
         }
         return 0;
}
