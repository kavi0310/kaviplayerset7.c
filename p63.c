#include<stdio.h>
int main()
{
    int n,i,j,a[100],b[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(j=0;j<n;j++)
    {
        scanf("%d",&b[j]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
    {
        if(a[i]==b[j])
        printf("%d ",a[i]);
    }
    }
}
