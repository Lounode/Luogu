#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
int n,k,sum=0;
int s[10010];
bool ss(int b)
    {
        for(int i=2;i<=sqrt(b);i++)
            if(b%i==0)
                return false;
        return true;
    }
void dfs (int x,int y,int z)
{
	if(x==n+1||z==k)
	{
		if(ss(y)&&z==k)
			sum++;
		return;
	}
	
	dfs(x+1,y+s[x],z+1);
    dfs(x+1,y,z);
	return;
}
int main ()
{
	scanf("%d %d",&n,&k);
	
	for(int i=1;i<=n;i++)
		scanf("%d",&s[i]);
	
	dfs(1,0,0);
	cout<<sum;
	return 0;
}