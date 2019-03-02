#include <iostream>
#include <cstdio>
using namespace std;
int n;
int na,nb;
int sa[500];
int sb[500];
int t1=0,t2=0;
int suma=0,sumb=0;
int main ()
{
	scanf("%d %d %d",&n,&na,&nb);
//
//	cout<<n<<" "<<na<<" "<<nb;
//	
	for(int i=1;i<=na;i++)
		scanf("%d",&sa[i]);
	for(int i=1;i<=nb;i++)
		scanf("%d",&sb[i]);
//	
//	for(int i=1;i<=na;i++)
//		cout<<sa[i]<<" ";
//	cout<<"\n";
//	for(int i=1;i<=nb;i++)
//		cout<<sb[i]<<" ";
//	
	for(int i=1;i<=n;i++)
	{
		t1++;
		t2++;
		if(t1>na) t1=1;
		if(t2>nb) t2=1;
		if(sa[t1]==sb[t2]) continue;//平局 
		//剪刀 
		if(sa[t1]==0&&sb[t2]==1) sumb++;
		if(sa[t1]==0&&sb[t2]==2) suma++;
		if(sa[t1]==0&&sb[t2]==3) suma++;
		if(sa[t1]==0&&sb[t2]==4) sumb++;
		
		if(sb[t2]==0&&sa[t1]==1) suma++;
		if(sb[t2]==0&&sa[t1]==2) sumb++;
		if(sb[t2]==0&&sa[t1]==3) sumb++;
		if(sb[t2]==0&&sa[t1]==4) suma++;
		//石头 
		if(sa[t1]==1&&sb[t2]==2) sumb++;
		if(sa[t1]==1&&sb[t2]==3) suma++;
		if(sa[t1]==1&&sb[t2]==4) sumb++;
		
		if(sb[t2]==1&&sa[t1]==2) suma++;
		if(sb[t2]==1&&sa[t1]==3) sumb++;
		if(sb[t2]==1&&sa[t1]==4) suma++; 
		//布 
		if(sa[t1]==2&&sb[t2]==3) sumb++;
		if(sa[t1]==2&&sb[t2]==4) suma++;
		
		if(sb[t2]==2&&sa[t1]==3) suma++;
		if(sb[t2]==2&&sa[t1]==4) sumb++;
		//蜥蜴人 
		if(sa[t1]==3&&sb[t2]==4) suma++;
		
		if(sb[t2]==3&&sa[t1]==4) sumb++;
	}
	cout<<suma<<" "<<sumb;
	return 0;
}