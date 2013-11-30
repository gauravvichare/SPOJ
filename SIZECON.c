//got 0.1
#include<stdio.h>
int main()
{
   unsigned long sum=0;

   short n,a,i;
   scanf("%hu",&n);
   for(i=0;i<n;i++)
   {
       scanf("%hu",&a);
       if(a>0)
       sum+=a;
   }
printf("\n%lu",sum);
   return 0;
}
