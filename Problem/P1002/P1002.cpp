/*
摸到了点DP的门道了,初做练练手 //感谢RXZ老师知乎上的回答
推导的方程:f[i][j]=f[i-1][j]+f[i][j-1]

//*/
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
#define ll unsigned long long
using namespace std;
ll s[30][30];
bool m[50][50];
int a[5]={-1,-2,1,2};
int b[5]={-1,-2,1,2};
int x,y;
int hx,hy;
int main()
{
	scanf("%lld%lld%lld%lld",&x,&y,&hx,&hy);
	//马的控制点
	m[hx][hy]=true;
	/*
	for(int i=0;i<=3;i++)
		for(int j=0;j<=3;j++)
			m[hx+a[i]][hy+b[j]]=true;
	//*/
	/*
	m[hx-1][hy-2]=true;
	m[hx-2][hy-1]=true;
	m[hx+1][hy-2]=true;
	m[hx+2][hy-1]=true;
	m[hx-1][hy+2]=true;
	m[hx-2][hy+1]=true;
	m[hx+1][hy+2]=true;
	m[hx+2][hy+1]=true;
	//*/
	s[1][0]=1;
	for(int i=1;i<=x+1;i++)
		for(int j=1;j<=y+1;j++)
		{
			s[i][j]=s[i-1][j]+s[i][j-1];
			if(m[i-1][j-1])
				s[i][j]=0;

		}
	cout<<s[x+1][y+1];
	return 0;
}
