//got 0.1
#include<stdio.h>

int main()
{
    int a[402][402]={0},b[402],i,j,n,k,l,visited[402]={0},sum=0,mini;

    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
      for(j=1;j<=n;j++)
      {
       scanf("%d",&a[i][j]);
      }
    }
    b[0]=1;
    visited[1]=1;
    k=1;
    i=1;
    while(k<n)
    {
        mini=999;
        for(j=1;j<=n;j++)
        {

            if(!visited[j]&&a[i][j]<mini)
            {
                mini=a[i][j];
                //printf("%d ",mini);
                l=j;
            }
        }
       // printf("%d",i);
       i=l;
        visited[i]=1;
        b[k]=i;
        k++;
        sum+=mini;
        printf("\n");
    }
    b[n]=1;
    printf("%d\n",sum+a[l][1]);
for(i=0;i<=n;i++)
printf("%d ",b[i]);
return 0;
}
