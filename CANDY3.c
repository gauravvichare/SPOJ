

            #include<stdio.h>
            int main()
            {
                unsigned long long int n1,n,no,a[10000]={0},i,j,sum;

                scanf("%llu",&n1);
                printf("\n");
                for(i=0;i<n1;i++)
                {
                    sum=0;
                    scanf("%llu",&n);
                    for(j=0;j<n;j++)
                    {
                        scanf("%llu",&no);
                        sum+=no%n;
                    }
                    if(sum%n==0)
                    a[i]=1;
                    printf("\n");
                }

                for(i=0;i<n1;i++)
                    if(a[i]==1)
                        printf("YES\n");
                    else
                        printf("NO\n");
                return 0;
            }
