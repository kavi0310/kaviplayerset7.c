#include<stdio.h>
int main()
{
    int n,x,i,j,a[100],f=0;
    scanf("%d%d",&n,&x);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
    for(j=i+1;j<n;j++)
    {
        if(a[i]+a[j]==x)
        f=1;
    }
    }
    if(f==1)
    printf("yes");
    else
    printf("no");
}
