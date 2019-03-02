#include <iostream>
#include <cstdio>
using namespace std;
long long m,n,ms;
long long pow(long long x,long long y)
{
	long long ans=1;
	if(y==0)
		return 0;
	x%=ms;
		while(y)//n%2!=0
		{
			if(y&1)				//n=n/2;
			ans=ans*x%ms;
			y>>=1;	
			x=x*x%ms;		//x=x*x%mod;//在计算的过程中直接取模 ;
		}
	return ans;
}
int main ()
{
	scanf("%d%d%d",&m,&n,&ms);	// 输入n^m%s;
	cout<<m<<"^"<<n<<" mod "<<ms<<"="<<pow(m,n);	//计算n^m%s; 
	
	return 0;
}