#include <stdio.h>
#include <stdlib.h>
int main()
{
    int p[]={8,1,4,7,3,3,4,7,1};
    int n=sizeof(p)/sizeof(p[0]);
    int i,j,k,x=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(p[i]<p[j])
            {
                k=p[i];
                p[i]=p[j];
                p[j]=k;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        if((i+1)%2==0)
        {
            x-=p[i];
        }
        else
        {
            x+=p[i];
        }
    }
    printf("%d",x);
    return 0;
}
