#include <iostream>
#include <cstdio>
using namespace std;
bool wj=true;
int k;
int a1,a2,a3;
int main ()
{
	scanf("%d",&k);
//	cout<<(22555%10000)/10<<"\n";
//	/*
	for(int i=10000;i<=30000;i++)
	{
		a1=i/100;
		a2=(i%10000)/10;
		a3=i%1000;
		if(a1%k==0&&a2%k==0&&a3%k==0)
		{
			//cout<<a1<<" "<<a2<<" "<<a3<<"\n";
			cout<<i<<"\n";
			wj=false;
		}
		
	}
//	 */
	if(wj)
	cout<<"No";
	return 0;
}