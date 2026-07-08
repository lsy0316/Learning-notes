#include<bits/stdc++.h>
using namespace std;

//贪心算法求解：假设每天都卖出，那么一定要在之前最便宜的时候买入 
int maxProfit(vector<int>& prices, int n){
	int maxprofit = 0;
	int minprice = prices[0];
	for(int i = 0 ; i < n ; i++){
		int price = prices[i];
		if(price < minprice){
			minprice = price;
		}
		int profit = price - minprice;
		if(profit > maxprofit){
			maxprofit = profit;
		}
	} 
	return maxprofit;
}

int main(){
	int n;
	cin >> n;
	vector<int> prices(n);
	for(int i = 0 ; i < n ; i++){
		cin >> prices[i];
	}
	int ans = maxProfit(prices, n);
	cout << ans << endl;
	return 0;
}
