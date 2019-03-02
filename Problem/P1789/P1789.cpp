#include <iostream>
#include <cstdio>
using namespace std;
int n,m,k;
int xi,yi;
int oi,pi;
int s[10000][10000];
int ans=0;
int main ()
{
	scanf("%d%d%d",&n,&m,&k);
	for(int i=0;i<m;i++)
	{
		scanf("%d%d",&xi,&yi);
		s[xi][yi]=1;
		if(xi-1>=1) s[xi-1][yi]=1;
		if(xi-2>=1) s[xi-2][yi]=1;
		if(xi-1>=1&&yi+1<=n) s[xi-1][yi+1]=1;
		if(yi+1<=n) s[xi][yi+1]=1;
		if(yi+2<=n) s[xi][yi+2]=1;
		if(xi+1<=n) s[xi+1][yi]=1;
		if(xi+2<=n) s[xi+2][yi]=1;
		if(xi+1<=n&&yi+1<=n) s[xi+1][yi+1]=1;
		if(yi-1>=1) s[xi][yi-1]=1;
		if(yi-2>=1) s[xi][yi-2]=1;
		if(xi-1>=1&&yi-1>=1) s[xi-1][yi-1]=1;
		if(xi+1<=n&&yi-1>=1) s[xi+1][yi-1]=1;
	}
	for(int i=0;i<k;i++)
	{
		scanf("%d%d",&oi,&pi);
		s[oi][pi]=1;
		if(oi+1<=n) s[oi+1][pi]=1;
		if(oi+2<=n) s[oi+2][pi]=1;
		if(oi-1>=1) s[oi-1][pi]=1;
		if(oi-2>=1) s[oi-2][pi]=1;
		if(pi+1<=n) s[oi][pi+1]=1;
		if(pi+2<=n) s[oi][pi+2]=1;
		if(pi-1>=1) s[oi][pi-1]=1;
		if(pi-2>=1) s[oi][pi-2]=1;
		if(oi+1<=n&&pi+1<=n) s[oi+1][pi+1]=1;
		if(oi+1<=n&&pi+2<=n) s[oi+1][pi+2]=1;
		if(oi+2<=n&&pi+1<=n) s[oi+2][pi+1]=1;
		if(oi+2<=n&&pi+2<=n) s[oi+2][pi+2]=1;
		if(oi-1>=1&&pi+1<=n) s[oi-1][pi+1]=1;
		if(oi-1>=1&&pi+2<=n) s[oi-1][pi+2]=1;
		if(oi-2>=1&&pi+1<=n) s[oi-2][pi+1]=1;
		if(oi-2>=1&&pi+2<=n) s[oi-2][pi+2]=1;
		if(oi+1<=n&&pi-1>=1) s[oi+1][pi-1]=1;
		if(oi+1<=n&&pi-2>=1) s[oi+1][pi-2]=1;
		if(oi+2<=n&&pi-1>=1) s[oi+2][pi-1]=1;
		if(oi+2<=n&&pi-2>=1) s[oi+2][pi-2]=1;
		if(oi-1>=1&&pi-1>=1) s[oi-1][pi-1]=1;
		if(oi-1>=1&&pi-2>=1) s[oi-1][pi-2]=1;
		if(oi-2>=1&&pi-1>=1) s[oi-2][pi-1]=1;
		if(oi-2>=1&&pi-2>=1) s[oi-2][pi-2]=1;
	}
	for(int i=1;i<=n;i++)
		for(int o=1;o<=n;o++)
			if(!s[i][o])
				ans++;
	cout<<ans;
	return 0;
}