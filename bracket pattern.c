input:
[3]
output:
[]
[[]][]
[[[]]][[]][]




#include<stdio.h>
#include<stdlib.h>
void brackets(int x,char c1,char c2)
{
    for(int i=1;i<=x;i++)
    printf("%c",c1);
    for(int i=1;i<=x;i++)
    printf("%c",c2);
}

int main()
{
    char c1,c2;
    int n;
    scanf("%c%d%c",&c1,&n,&c2);
    int i,j;
    for(i=1;i<=n;i++)
    { 
        int t=i;
        while(t!=0)
        {
        brackets(t,c1,c2);
        t=t-1;
        }
        printf("\n");
    }

}
