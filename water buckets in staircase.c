input
5
7 8 9 5 2  
2
output  
23 2 2 2 2  


#include<stdio.h>
#include<stdlib.h>

int main()
{
int n,i;
scanf("%d",&n);
int a[n],x;
for(i=0;i<n;i++)
scanf("%d",&a[i]);
scanf("%d",&x);
for(i=n-1;i>0;i--)
{
    if(a[i]>x)
    {
        a[i-1]+=a[i]-x;
        a[i]=x;
    }
}
if(a[0]>x)
a[0]=x;
for(i=0;i<n;i++)
printf("%d ",a[i]);
}
