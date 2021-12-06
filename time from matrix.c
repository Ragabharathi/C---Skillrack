Time from matrix:

#include<stdio.h>
#include<stdlib.h>

int main()
{
    char  m[12][12];
    for(int i=0;i<12;i++){
        for(int j=0;j<12;j++){
            scanf(" %c ",&m[i][j]);
        }
    }
    for(int j=0;j<12;j++){
        if(m[11][j]=='A'){
            printf("12:%02d AM\n",j*5);
        }
    }
    for(int i=0;i<11;i++){
        for(int j=0;j<12;j++){
            if(m[i][j]=='A'){
                printf("%02d:%02d AM\n",i+1,j*5);
            }
        }
    }
    for(int j=0;j<12;j++){
        if(m[11][j]=='P'){
            printf("12:%02d PM\n",j*5);
        }
    }
    for(int i=0;i<11;i++){
        for(int j=0;j<12;j++){
            if(m[i][j]=='P'){  
                printf("%02d:%02d PM\n",i+1,j*5);
            }
        }
    }
}
