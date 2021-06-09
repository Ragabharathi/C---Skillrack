Robot co-ordinates

Input:

x2 y1 N3 E2 S1

Output:

x4 y3

code:

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
  char s[100];
  scanf("%[^\n]",s);
  int l=strlen(s),i,j,s1=0,s2=0,sum1=0,sum2=0,c=0,r;
  for(i=0;i<l;i++)
  {
     s1=0,s2=0,c=0;
     for(j=i+1;j<l;j++)
     {
       c++;
       if(s[j]==' ')
       break;
       else if(c==1)
       {
          if(s[i]=='x')
          {
             if(s[j]!='-')
             s1=s[j]-'0';
             else
             {
               r=s[j+1]-'0';
               r=-1*r;
               s1=r;
             }
          }
          else if(s[i]=='E')
          s1=s[j]-'0';
          else if(s[i]=='W')
          s1=-1*(s[j]-'0');
          else if(s[i]=='y')
          {
             if(s[j]!='-')
             s2=s[j]-'0';
             else
             {
               r=s[j+1]-'0';
               r=-1*r;
               s2=r;
             }
          }
          else if(s[i]=='N')
          s2=s[j]-'0';
          else if(s[i]=='S')
          s2=-1*(s[j]-'0');
        }
        else
        {
          s1=0;
          s2=0;
        }
        sum1+=s1;
        sum2+=s2;
      }
       i=j;
    }
   printf("x%d y%d",sum1,sum2);
   return 0;
}
  