#include<iostream>
#include<algorithm>
using namespace std;

int main() {
	int n, W;
	int weight[110], value[110];

	int dp[110][10010];

	for (int i = 0; i < n; ++i){
		cin >> n >> W;
		cin >> weight[i] >> value[i];
	}
	for (int i = 0; i < n; ++i){
		for (int w = 0; w < W; ++w){
			if (w >= weight[i]) dp[i + 1][w] = max(dp[w - weight[i]][w] + value[i], dp[i][w]);
			else{
			dp[i + 1][w] = dp[i][w];
		}
	}
	}
	cout << dp[n][W] << endl;
	return 0;
}
