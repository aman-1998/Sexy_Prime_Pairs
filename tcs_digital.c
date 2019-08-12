#include<stdio.h>
#include<stdlib.h>

int main()
{
    int m,n,i,j,count=0,flag;
    scanf("%d %d",&m,&n);
    int *prime=(int*)calloc(n+1,sizeof(int));
    prime[0]=1;
    prime[1]=1;
    for(i=2;i<=n;i++)
    {
        if(prime[i]==0)
        {
            for(j=i*i;j<=n;j=j+i)
                prime[j]=1;
        }
    }
    for(i=m;i<=n;i++)
    {
        if(prime[i]==0)
        {
            for(j=i+6;j<=n;j++)
            {
                if(prime[j]==0)
                {
                    if(i-j==-6)
                    {
                        printf("(%d,%d)\n",i,j);
                        count++;
                        break;
                    }
                }
            }
        }
    }
    printf("No. of  sexy prime pairs = %d\n",count);
    return 0;
}

