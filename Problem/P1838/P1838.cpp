#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
char a[10];
int s[10];
int l;
bool ok=false;
int main ()
{
	scanf("%s",a);
	l=strlen(a);
	for(int i=0;i<l;i++)
	{
		if(i%2==0)
			s[a[i]-'0']=1;
		else
			s[a[i]-'0']=2;
	}
/*
	for(int i=1;i<=9;i++)
	{
		cout<<s[i];
		if(i==3||i==6)
			cout<<"\n";
	}
*/
	if(s[1]==s[2]&&s[2]==s[3]&&s[1]==1) {ok=true;cout<<"xiaoa wins.\n";}
	if(s[1]==s[4]&&s[4]==s[7]&&s[1]==1) {ok=true;cout<<"xiaoa wins.\n";}
	if(s[7]==s[8]&&s[8]==s[9]&&s[7]==1) {ok=true;cout<<"xiaoa wins.\n";}
	if(s[3]==s[6]&&s[6]==s[9]&&s[3]==1) {ok=true;cout<<"xiaoa wins.\n";}
	if(s[1]==s[5]&&s[5]==s[9]&&s[1]==1) {ok=true;cout<<"xiaoa wins.\n";}
	if(s[3]==s[5]&&s[5]==s[7]&&s[3]==1) {ok=true;cout<<"xiaoa wins.\n";}
	
	if(s[1]==s[2]&&s[2]==s[3]&&s[1]==2) {ok=true;cout<<"uim wins.\n";}
	if(s[1]==s[4]&&s[4]==s[7]&&s[1]==2) {ok=true;cout<<"uim wins.\n";}
	if(s[7]==s[8]&&s[8]==s[9]&&s[7]==2) {ok=true;cout<<"uim wins.\n";}
	if(s[3]==s[6]&&s[6]==s[9]&&s[3]==2) {ok=true;cout<<"uim wins.\n";}
	if(s[1]==s[5]&&s[5]==s[9]&&s[1]==2) {ok=true;cout<<"uim wins.\n";}
	if(s[3]==s[5]&&s[5]==s[7]&&s[3]==2) {ok=true;cout<<"uim wins.\n";}
	//ysr ak ioi if i don't AC this question
	if(!ok)
		cout<<"drew."<<"\n";
	return 0;
}