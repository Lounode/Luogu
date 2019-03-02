#include<cstdio>
#include<cstring>
int f1,f2,max=0,sum;
int main()
{
    for(int i=1;i<=7;++i)
    {
        scanf("%d %d",&f1,&f2);
        f1+=f2;
        if(f1>8)
        {
            if(f1-8>max)
            {
                max=f1-8;
                sum=i;
            }
        }
    }

    printf("%d",sum);

    return 0;
}