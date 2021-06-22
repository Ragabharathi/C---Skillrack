Dates - revenue dates greater than X in chronological order:



#include<stdio.h>
#include<stdlib.h>
int mnt(char s[])
{
    char t[15][5]={"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};
    for(int i=0;i<12;i++)
    {
        if(strcmp(t[i],s)==0)
        return i;
    }
    
}
int ch(int d,int m,int c,int dd,int mm,int cc)
{
    if(cc>c)
    return 1;
    if(mm>m&&cc==c)
    return 1;
    if(mm==m&&cc==c&&dd>d)
    return 1;
    return 0;
}
int main()
{
    int x,i,f=0,j,a[55],d[55],m[55],y[55],z,n;
    char t[55][5],o[5];
    scanf("%d\n",&x);
    for(i=0;i<x;i++)
    {
        scanf("%d-%[^-]-%d %d\n",&d[i],t[i],&y[i],&a[i]);
        m[i]=mnt(t[i]);
    }
    scanf("%d ",&z);
    for(i=0;i<x;i++)
    {
        for(j=0;j<i;j++)
        {
            if(ch(d[i],m[i],y[i],d[j],m[j],y[j]))
            {
                n=d[i];
                d[i]=d[j];
                d[j]=n;
                n=m[i];
                m[i]=m[j];
                m[j]=n;
                n=y[i];
                y[i]=y[j];
                y[j]=n;
                n=a[i];
                a[i]=a[j];
                a[j]=n;
                strcpy(o,t[i]);
                strcpy(t[i],t[j]);
                strcpy(t[j],o);
                
            }
        }
    }
    for(i=0;i<x;i++)
    {
        if(a[i]>=z)
        {
        printf("%02d-%s-%04d\n",d[i],t[i],y[i]);
        f=1;
        }
    }
    if(f==0)
    printf("-1");

}