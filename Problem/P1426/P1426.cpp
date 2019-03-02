#include <iostream>
#include <cstdio>
using namespace std;
double s,x;
double sp=7;
double sum=0;
int main ()
{
	cin>>s>>x;
	while (sum<s-x)
	{
		sum+=sp;
		sp*=0.98;
	}
	if(sp*0.98<=s+x-sum)
		cout<<"y";
	else
		cout<<"n";
	return 0;
}