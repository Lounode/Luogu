#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
int nasa,sm;
int accepted,baka;
int ans=0;
struct apple
{
	int xi;
	int yi;
}s[10000];
bool cmp (apple a,apple b)
{
	return a.yi<b.yi;
}
int main ()
{
	scanf("%d%d",&nasa,&sm);
	scanf("%d%d",&accepted,&baka);
	int caption =accepted+baka;
	for(int i=1;i<=nasa;i++)
		scanf("%d%d",&s[i].xi,&s[i].yi);
	//cout<<s[1].yi;
	sort(s+1,s+nasa+1,cmp);
	
	for(int i=1;i<=nasa;i++)
	{
		if(s[i].xi<=caption)
		{
			//cout<<s[i].xi<<" "<<s[i].yi;
			sm-=s[i].yi;
			if(sm>=0)
			{
				//cout<<i<<" "<<s[i].yi<<"\n";
				ans++;
			}
			
				
		}
			
	}
	cout<<ans;
	 return 0;
}