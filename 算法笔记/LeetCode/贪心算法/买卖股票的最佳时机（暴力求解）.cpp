#include<bits/stdc++.h>
using namespace std;

int maxProfit(vector<int>& prices, int n){
	int maxprofit = 0;
	for(int i = 0; i < n; i++){
		for(int j = i + 1; j < n; j++){
			if(prices[j] > prices[i]){
				int profit = prices[j] - prices[i];
				if(profit > maxprofit){
					maxprofit = profit;
				}
			}
		}
	}
	return maxprofit;
}
int main(){
	int n;
	cin >> n;
	vector<int> prices(n);
	for(int i = 0; i < n; i++){
		cin >> prices[i];
	}
	int ans = maxProfit(prices, n);
	cout << ans << endl;
	return 0;
}
