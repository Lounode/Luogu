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
int th,h,t,g;
int main()
{
	scanf("%d",&n);
	if(n>=1000)
	{
		th=n/1000;
		h=(n/100)%10;
		t=(n%100)/10;
		g=n%10;
	}
		
	if(n>=100&&n<1000)
	{
		h=n/100;
		t=(n/10)%10;
		g=n%10;
	}
		
	if(n>=10&&n<100)
	{
		t=n/10;
		g=n%10;
	}
	
	if(n<10)
	{
		g=n;
	}
//working
	//cout<<th<<h<<t<<g;
	if(th==1) cout<<"one thousand ";
	if(th==2) cout<<"two thousand ";
	if(th==3) cout<<"three thousand ";
	if(th==4) cout<<"four thousand ";
	if(th==5) cout<<"five thousand ";
	if(th==6) cout<<"six thousand ";
	if(th==7) cout<<"seven thousand ";
	if(th==8) cout<<"eight thousand ";
	if(th==9) cout<<"nine thousand ";
//hundred
	if(h==9) cout<<"nine hundred ";
	if(h==8) cout<<"eight hundred ";
	if(h==7) cout<<"seven hundred ";
	if(h==6) cout<<"six hundred ";
	if(h==5) cout<<"five hundred ";
	if(h==4) cout<<"four hundred ";
	if(h==3) cout<<"three hundred ";
	if(h==2) cout<<"two hundred ";
	if(h==1) cout<<"one hundred ";
//ten
	if(th!=0&&h==0&&(t>0||g>0))
		cout<<"and ";
	if(t==0&&h!=0&&g>0)
		cout<<"and ";
	if(t==2) cout<<"twenty ";
	if(t==3) cout<<"thirty ";
	if(t==4) cout<<"forty ";
	if(t==5) cout<<"fifty ";
	if(t==6) cout<<"sixty ";
	if(t==7) cout<<"seventy ";
	if(t==8) cout<<"eighty ";
	if(t==9) cout<<"ninety ";

	if(t==1&&g==1) cout<<"eleven";
	if(t==1&&g==2) cout<<"twelve";
	if(t==1&&g==3) cout<<"thirteen";
	if(t==1&&g==4) cout<<"fourteen";
	if(t==1&&g==5) cout<<"fifteen";
	if(t==1&&g==6) cout<<"sixteen";
	if(t==1&&g==7) cout<<"seventeen";
	if(t==1&&g==8) cout<<"eighteen";
	if(t==1&&g==9) cout<<"nineteen";

	if(g==1&&t!=1) cout<<"one";
	if(g==2&&t!=1) cout<<"two";
	if(g==3&&t!=1) cout<<"three";
	if(g==4&&t!=1) cout<<"four";
	if(g==5&&t!=1) cout<<"five";
	if(g==6&&t!=1) cout<<"six";
	if(g==7&&t!=1) cout<<"seven";
	if(g==8&&t!=1) cout<<"eight";
	if(g==9&&t!=1) cout<<"nine";
	if(t==1&&g==0) cout<<"ten";

	if(th==0&&h==0&&t==0&&g==0) cout<<"zero";

	/*
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
	//*/
	return 0;
}