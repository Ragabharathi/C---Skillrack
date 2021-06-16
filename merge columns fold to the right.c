Merge columns fold to the right:

#include<stdio.h>
#include<stdlib.h>

void main()
{
int r,c,i,j;
int n,col;
scanf("%d %d\n",&r,&c);
int mat[r][c],fold[r][c];
for(i=0;i<r;i++,scanf("\n"))
for(j=0;j<c;j++)
scanf("%d ",&mat[i][j]);
scanf("%d\n",&n);
col=n;
int s,cl=0;
for(j=n-1;j>=0;j--)
{
    for(i=0;i<r;i++)
    {
       s=mat[i][j];
       if(col<c)
       s+=mat[i][col];
       fold[i][cl]=s;
    }
    col++;
    cl++;
}
while(col<c)
{
    for(i=0;i<r;i++)
    fold[i][cl]=mat[i][col];
    col++;
    cl++;
}
for(i=0;i<r;i++,printf("\n"))
for(j=0;j<cl;j++)
printf("%d ",fold[i][j]);
}