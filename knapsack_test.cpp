#include <bits/stdc++.h> 
using namespace std; 

int knapSack(int W, int wt[], int val[], int n) 
{ 
	int dp[W + 1]; 
	memset(dp, 0, sizeof(dp)); 

	for (int i = 1; i < n + 1; i++) { 
		for (int w = W; w >= 0; w--) { 

			if (wt[i - 1] <= w) 
				dp[w] = max(dp[w], dp[w - wt[i - 1]] + val[i - 1]); 
		} 
	} 
	return dp[W]; 
} 

int main() 
{ 
	int n, m; cin >> n >> m;
	int profit[n], weight[n];
	for(int i=0;i<n;i++){
		cin >> weight[i] >> profit[i];
	}
	int s = sizeof(profit) / sizeof(profit[0]); 
	cout << knapSack(m, weight, profit, s); 
	return 0; 
}
