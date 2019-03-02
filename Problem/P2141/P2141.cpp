#include <iostream>
#include <cstdio>
#include <set>
#include <cstdlib>
using namespace std;
int n;
int s[1000];
set<int> num;
set<int> ans;
int main()
{
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		scanf("%d", &s[i]);
		num.insert(s[i]);
	}
	for (int i = 1; i <= n; i++) 
	{ 
		for (int o = i + 1; o <= n; o++) 
		{ 
			int tmp = s[i] + s[o]; 
			set<int>::iterator it = num.find(tmp);
				
			if (it != num.end()) 
			{    
				ans.insert(*it);
			}
		}
	}
	cout << ans.size();
//	system("pause");
	return 0;
}

