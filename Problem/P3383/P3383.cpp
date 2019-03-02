#include<iostream>    
#include<cstdio>  
using namespace std;
int prime[10000005], choose[10000005];
int tot, phi[10000005];
void getphi(int N) {
	phi[1] = 1;
	for (int i = 2; i <= N; i++) {
		if (!choose[i]) {
			prime[++tot] = i;
			phi[i] = i - 1;
		}
		for (int o = 1; o <= tot; o++) {
			if (i*prime[o]>N) break;
			choose[i*prime[o]] = 1;
			if (i%prime[o] == 0) {
				phi[i*prime[o]] = phi[i] * prime[o]; break;
			}
			else phi[i*prime[o]] = phi[i] * phi[prime[o]];
		}
	}
}
int N;
int m;
int main() {
	cin >> N >> m;
	getphi(N);
	for (int i = 1; i <= m; i++) {
		int x;
		cin >> x;
		if (x - 1 == phi[x]) cout << "Yes" << endl;
		else cout << "No" << endl;
	}
	return 0;
}