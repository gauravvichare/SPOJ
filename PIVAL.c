#include<stdio.h>

int main()
{
 long i;
 int c=1;
 printf("3.");
 for(i=0;i<=1000000;i++)
 {   c=c*10;
     printf("%d",c/7);
     c=c%7;
 }
return(0);
}
