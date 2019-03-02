#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
struct py
{
	int bh;
	int w;
	int clas;	
};
bool cmp (const py &a,const py &b)
{
	if(a.w!=b.w)return a.w>b.w; 
    return a.bh<b.bh;
}
py fr[20011];
int n,k;
int e[20];
int main ()
{
	scanf("%d%d",&n,&k);
	for(int i=0;i<10;i++)
	{
		scanf("%d",&e[i]);
	}
	for(int i=0;i<n;i++)
	{
		scanf("%d",&fr[i].w);
		fr[i].bh=i+1;
	}
	
	sort(fr,fr+n,cmp);
	
	for(int i=0;i<n;i++)
	{
		
		fr[i].clas=i%10;
		fr[i].w+=e[fr[i].clas];
	}
	sort(fr,fr+n,cmp);	
	
	for(int i=0;i<k;i++)
		cout<<fr[i].bh<<" ";	
	
	return 0;
}