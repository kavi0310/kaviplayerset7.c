#include<stdio.h>
int main()
{
    int n,a[100],i,k,c=0,j;
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        c=0;
    for(j=0;j<n;j++)
    {
        if(a[i]==a[j])
        {
        c++;
        }
    }
    if(c==k)
    {
    printf("%d ",a[i]);
    break;
    }
    }
}
    
