#include <cstdio>
#include <cstdlib>
#include <string.h>
#include <string>
#include <math.h>
#include <algorithm>
#include <iostream>
#include <queue>
#include <stack>
#include <map>
#include <set>
typedef long long ll;
using namespace std;
int n;
int qd;
int sum=0,lx=0,yt=0;
/*
int js (int x)
{
	if(x==1) return 1;
	if(x==2) return 2;
	int y=2;
	//x-=2;
	while (x--)
		y>>2 ;
	return y;
}
//*/
int main()
{
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&qd);
		if(!qd)
		{
			yt++;
		}
		else
		{
			
			if(yt>0)
				lx-=pow(2,yt-1);
			if(lx<0)
				lx=0;
			yt=0;
			lx++;
						sum++;
			if(lx>=3)	sum++;
			if(lx>=7)	sum++;
			if(lx>=30)	sum++;
			if(lx>=120)	sum++;
			if(lx>=365)	sum++;
		}
		//cout<<sum<<"\n";
	}
	cout<<sum<<"\n";
	return 0;
}