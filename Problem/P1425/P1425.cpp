#include <iostream>
using namespace std;
int main ()
{
	int a,b,c,d,e,f,g,h,i;
	cin>>a>>b>>c>>d;
	g=a*60+b;
	h=c*60+d;
	i=h-g;
	e=i/60;
	f=i-60*e;
	cout<<e<<" "<<f<<endl;
	return 0;
}