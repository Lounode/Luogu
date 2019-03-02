#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
char s[100010];
int l;
int ans=0;
int main ()
{
	scanf("%[^\n]%*c",&s);
	//ysr ak ioi
	l=strlen(s);
	for(int i=0;i<l;i++)
	{
		if(s[i]=='a') ans+=1;
		if(s[i]=='b') ans+=2;
		if(s[i]=='c') ans+=3;
		if(s[i]=='d') ans+=1;
		if(s[i]=='e') ans+=2;
		if(s[i]=='f') ans+=3;
		if(s[i]=='g') ans+=1;
		if(s[i]=='h') ans+=2;
		if(s[i]=='i') ans+=3;
		if(s[i]=='j') ans+=1;
		if(s[i]=='k') ans+=2;
		if(s[i]=='l') ans+=3;
		if(s[i]=='m') ans+=1;
		if(s[i]=='n') ans+=2;
		if(s[i]=='o') ans+=3;
		if(s[i]=='p') ans+=1;
		if(s[i]=='q') ans+=2;
		if(s[i]=='r') ans+=3;
		if(s[i]=='s') ans+=4;
		if(s[i]=='t') ans+=1;
		if(s[i]=='u') ans+=2;
		if(s[i]=='v') ans+=3;
		if(s[i]=='w') ans+=1;
		if(s[i]=='x') ans+=2;
		if(s[i]=='y') ans+=3;
		if(s[i]=='z') ans+=4;
		if(s[i]==' ') ans+=1;
		// ysr ak ioi wc ctsc noip
		//此为我们机房里的一个大佬
	}
	cout<<ans<<"\n";
	return 0;
}