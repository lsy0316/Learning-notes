#include<bits/stdc++.h>
using namespace std;

int singleNumber(vector<int>& nums){
	//异或运算
	 
}
int main(){
	int n;
	cin >> n;
	vector<int> nums(n);
	//输入数组 
	for(int i = 0 ; i < n ; i++){
		cin >> nums[i];
	}
	int ans = singleNumber(nums);
	cout << ans << endl;
	return 0;
}
