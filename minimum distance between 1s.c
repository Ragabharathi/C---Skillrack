Minimum distance between 1's:

Input:

5
0 0 1 0 0
0 1 0 0 1
0 0 0 0 0 
0 0 1 0 0 
0 0 0 0 0

Output:

2

Code:

#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

int main()
{
   int n;
   scanf("%d",&n);
   int a[n][n],i,j,c=0,x,y,r,s,min=INT_MAX,d=0,k;
   for(i=0;i<n;i++)
   {
      for(j=0;j<n;j++)
      {
        scanf("%d",&a[i][j]);
      }
   }
   for(i=0;i<n;i++)
   {
      for(j=0;j<n;j++)
      {
         if(a[i][j]==1)
         {
           x=i;y=j;
           for(int m=j+1;m<n;m++)
           {
             if(a[i][m]==1)
             {
               r=i;
               s=m;
               d=s-j;
               if(d<min)
               min=d;
             }
           }
           for(int l=i+1;l<n;l++)
           {
           for(k=0;k<n;k++)
           {
             if(a[i+1][k]==1)
             {
               r=i+1;
               s=k;
               if(y>s)
               d=(r-x)+(y-s);
               else
               d=(r-x)+(s-y);
               if(d<min)
               min=d;
             }
           }
           }
         }
       }
     } 
printf("%d",min);
return 0;
    }
