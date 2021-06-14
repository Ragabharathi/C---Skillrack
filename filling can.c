Filling can:

Input:
5
2
3

Output:
2

Code:

#include<stdio.h>
#include <stdlib.h>

int main()
{
   int x,y,z,count=1,check=0,res=0;
   scanf("%d%d%d",&x,&y,&z);
 
   if(z>x&&z>y)
   {
     printf("%d",-1);
     return 0;
   }
   if(x<y)
   {
     int temp=x;
     x=y; 
     y=temp;
   }
   else{
     do
     {
        if(x==z)
        {
          check=1;
          break;
        }
        x=x-y;
       if(res)
       {
        count+=2;
       }
      else
      {
       count++;
       res=1;
      }
    }while(x>=z);
  }
 if(check)
 printf("%d",count);
 else
 printf("-1");
 return 0;
}
