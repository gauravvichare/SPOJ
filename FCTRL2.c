#include<stdio.h>
#include<string.h>

int main()
{
    char a[10][103],b[10][103];
    int c[103],d[103],e[103],f[103],h[103],m[103],len1,len2,j,i,carry,temp1,temp2,x,y,flag,x1,flag1;


 for(i=0;i<10;i++)
 {
    scanf("%s",a[i]);
    scanf("%s",b[i]);
 }

  for(x1=0;x1<10;x1++)
  {
       for(i=0;i<103;i++)
    {
      c[i]=0;
      d[i]=0;
      e[i]=0;
      h[i]=0;
      m[i]=0;
    }
      carry=temp1=temp2=flag=flag1=0;

    len1=strlen(a[x1]);
    len2=strlen(b[x1]);

    //////////////////////CONVERT TO INTEGER//////////////////////
    for(i=len1-1,j=102;i>=0;i--,j--)
    {
        c[j]=a[x1][i]-48;
    }

    for(i=len2-1,j=102;i>=0;i--,j--)
    {
        d[j]=b[x1][i]-48;
    }
///////////////////////////////////////////////////////////////////



///////////////ADDITION OF SUM AND DIFFERRENCE (C+D)=E//////////////////////
carry=0;
    for(i=102;i>=0&&((i>101-len1)||(i>101-len2));i--)
    {
        temp1=c[i]+d[i]+carry;
        e[i]=temp1%10;
        carry=temp1/10;
    }
    e[i]=carry;

////////////////////////////////////////////////////////////////////////

j=0;
while(e[j]==0&&j<103)
    j++;


//////////////////DIVIDE(H=E/2)//////////////////////
carry=0;

for(i=j;i<103;i++)
{

    if(carry)
    {
       temp2=carry*10+e[i];
       h[i]=temp2/2;
       carry=temp2%2;
    }
    else
    {
        h[i]=e[i]/2;

        carry=e[i]%2;
    }

}
///////////////////////////////////////////////////


if(carry)
{
    flag=1;
}

if(flag)
{
    c[102]=c[102]-1;
}

for(j=0;h[j]==0&&j<103;j++);
if(j==103)
printf("0");
flag1=0;
for(i=j;i<103;i++)
    printf("%d",h[i]);
    if(flag)
        printf(".5\n");
     else
     {
         printf("\n");
     }

 for(i=102;i>0;i--)
 {
   if(c[i]>=h[i])
   {
    m[i]=c[i]-h[i];
   }
   else
   {
     m[i]=c[i]+10-h[i];
     c[i-1]=c[i-1]-1;
   }

 }

for(j=0;m[j]==0&&j<103;j++);
if(j==103)
printf("0");
 for(i=j;i<103;i++)
    printf("%d",m[i]);

      if(flag)
        printf(".5\n");
       else
        printf("\n");


}
return 0;
}
