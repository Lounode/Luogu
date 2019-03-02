#include <iostream>
#include <cstdio>
using namespace std;
int zs,zf,zm;
int hs,hf,hm;
int sp;
long long ans=0;
int main ()
{
	scanf("%d:%d:%d",&zs,&zf,&zm);
	scanf("%d:%d:%d",&hs,&hf,&hm);
	scanf("%d",&sp);
//	cout<<zs<<" "<<zf<<" "<<zm<<"\n";
//	cout<<hs<<" "<<hf<<" "<<hm<<"\n";
//	cout<<sp<<"\n";

	while(true)
	{
		if(zs==hs&&zf==hf&&zm==hm)
			break;
		zm++;
		if(zm==60)
		{
			zf++;
			zm=0;
		}
		if(zf==60)
		{
			zs++;
			zf=0;
		}
		//cout<<1<<"\n";
		ans+=sp;
	}

	cout<<ans;
}