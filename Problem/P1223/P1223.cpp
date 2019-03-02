#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
struct sz
{
	int z;
	int x;
};
bool cmp (sz a,sz b)
{
	if(a.z<b.z)
		return true;
	return false;
}
int n;
sz s[100010];
int timea[100010];
double ans=0;
int main ()
{
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&s[i].z);
		s[i].x=i;
	}
		
	sort(s+1,s+n+1,cmp);
	for(int i=1;i<=n;i++)
		cout<<s[i].x<<" ";
		cout<<"\n";
	timea[1]=0;
	timea[2]=s[1].z;
	for(int i=3;i<=n;i++)
		timea[i]=timea[i-1]+s[i-1].z;
	for(int i=1;i<=n;i++)
		ans+=timea[i];
	//cout<<ans;
	ans/=n;
	printf("%0.2f",ans);
	return 0;
}