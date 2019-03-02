#include<stdio.h>
int main()
{
    int N;
    int S=0;
    int a=0;
    int T=0;
    scanf("%d",&N);
    if(N<0)
    {
        N=0-N;
        T=1;
    }
    for (int i=0;i<10;i++) 
    {
        int b=N/10;
        a=N-b*10;
        N=N/10;
        S=S+a;
        S=S*10;
        if (N<10)
        {
            a=N;
            S=S+a;
            break;
        }
    }
    if(T==1)
    {
        S=0-S;
    }
    printf("%d\n",S);
    return 0;
}