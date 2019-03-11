#include <cstdio>
#include <cstdlib>
#include <string.h>
#include <string>
#include <math.h>
#include <algorithm>
#include <iostream>
#include <queue>
#include <stack>
#include <map>
#include <set>
typedef long long ll;
using namespace std;
int n;
int main()
{
	scanf("%d",&n);
	if(n>=1000)
	{
		if((n/1000)==1) cout<<"one ";
		if((n/1000)==2) cout<<"two ";
		if((n/1000)==3) cout<<"three ";
		if((n/1000)==4) cout<<"four ";
		if((n/1000)==5) cout<<"five ";
		if((n/1000)==6) cout<<"six ";
		if((n/1000)==7) cout<<"seven ";
		if((n/1000)==8) cout<<"eight ";
		if((n/1000)==9) cout<<"nine ";
		cout<<"thousand";
		if(n/1000==0&&(n/100)%10==0&&(n/10)%10==0&&n%10==0) return 0;
		if((n/100)%10==1) cout<<" one ";
		if((n/100)%10==2) cout<<" two ";
		if((n/100)%10==3) cout<<" three ";
		if((n/100)%10==4) cout<<" four ";
		if((n/100)%10==5) cout<<" five ";
		if((n/100)%10==6) cout<<" six ";
		if((n/100)%10==7) cout<<" seven ";
		if((n/100)%10==8) cout<<" eight ";
		if((n/100)%10==9) cout<<" nine ";
		cout<<"hundred";
	}
	return 0;
}