#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstdlib>
using namespace std;
struct nn
{
	int fy;
	int sl;
};
nn s [5010];
bool cmp(nn a, nn b)
{
	if (a.fy < b.fy)
		return true;
	return false;
}
int n, m;
int c=1, sum=0;
int main()
{
	scanf("%d%d", &n, &m);
	for (int i = 1; i <= m; i++)
		scanf("%d%d", &s[i].fy, &s[i].sl);

	sort(s + 1, s + m + 1,cmp);
//	for (int i = 1; i <= m; i++)
//		cout << s[i].fy << " " << s[i].sl << "\n";
	while (n)
	{
		if (s[c].sl != 0)
		{
			s[c].sl--;
			sum += s[c].fy;
			n--;
		}
		else c++;
	}
	cout << sum;
//	system("pause");
    return 0;
}

