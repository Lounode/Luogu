#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
int n;
double health=10;
double losthealth;
int expboost;
int level=0,xp=0;
int main ()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>losthealth>>expboost;
		if(health-losthealth<=0) break;
		health-=losthealth;
		if(health>10) health=10;
		xp+=expboost;
	}
	//cout<<xp<<"\n";
	while (xp>=pow(2,level))
	{
		xp-=pow(2,level);
		level++;
	}
	cout<<level<<" "<<xp<<"\n";
	return 0;
}