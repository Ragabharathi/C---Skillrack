input 
5
output
  ****1
  ***234
  **56789
  *1011121
  314151617


#include<stdio.h>
#include<stdlib.h>

int main()
{
int n,i,j,x=0,m=1;
char s[10000],t[10000];
scanf("%d",&n);
for(i=1;i<=n*n*n;i++)
{
    sprintf(t,"%d",i);
    strcat(s,t);
}
for(i=0;i<n;i++)
{
    for(j=n-1;j>i;j--)
    printf("*");
    for(j=0;j<m;j++)
    printf("%c",s[x++]);
    m+=2;
    printf("\n");
}
}
