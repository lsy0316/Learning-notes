#include<bits/stdc++.h>
using namespace std;

//动态规划
int climbStairs(int n){
	if(n == 1){
		return 1;
	}
	if(n == 2){
		return 2;
	}
	int a = 1, b = 2;
	int temp = 0;
	for(int i = 3 ; i <= n; i++){
		temp = a + b;
		a = b;
		b = temp;
	}
	return temp;
}
int main(){
	int n;
	cin >> n;
	int ans = climbStairs(n);
	cout << ans << endl;
	return 0;
} 
