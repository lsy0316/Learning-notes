#include<bits/stdc++.h>
using namespace std;

int fib(int n){
	if(n == 0){
		return 0;
	}
	if(n == 1){
		return 1;
	}
	//动态规划：减少重复计算
	int temp;
	int a = 0, b = 1;
	for(int i = 2 ; i <= n; i++){
		temp = a + b;
		a = b;
		b = temp;
	}
	return temp;
}

int main(){
	int n;
	cin >> n;
	int ans = fib(n);
	cout << ans << endl;
	return 0;
}
