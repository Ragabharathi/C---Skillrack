
Input:

5

Output:

- - - - 1
- - - 1 * 1
- - 1 * 2 * 1
- 1 * 3 * 3 * 1
1 * 4 * 6 * 4 * 1

Code:

int main()
{
    int N;
    scanf("%d",&N);
    for(int row=1;row<=N;row++){
        for(int ctr=1;ctr<=N-row;ctr++){
            printf("- ");
        }
        long long int num=1;
        for(int col=1;col<=row;col++){
            printf("%lld ",num);
            if(col!=row){
                printf("* ");
            }
            num=(num*(row-col))/col;
        }
        printf("\n");
    }
}