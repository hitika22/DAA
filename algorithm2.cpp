#include<bits/stdc++.h>
using namespace std;


typedef long long int ll;
ll dp[1000][1000];
int main() {

	ll m, n; 
	cout<<"Input numbers m and n:";
	cin >> m >> n;
	for (int i = 0; i <= m; i++) {
		for (int j = 0; j <= n; j++) {
			dp[i][j] = 0;
		}
	}
	for (int i = 1; i <= m; i++) {
		dp[i][1] = 1;
	}
	for (int i = 2; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			dp[j * 2][i] += dp[j][i - 1];
		}
		for (int j = 1; j <= m; j++) {
			dp[j][i] += dp[j - 1][i];
		}
	}
	ll ans = 0;
	for (int i = 1; i <= m; i++) {
		ans += dp[i][n];
	}
	cout <<"Total no. of sequences:"<< ans << endl;
}
