#include<bits/stdc++.h>
using namespace std;

int singleNumber(vector<int>& nums){
	//标准库：count(nums.begin(),nums.end(),target)
	//复杂度O(n^2) 
	int n = nums.size();
	for(int i = 0; i < n; i++){
		int x = nums[i];
		if(count(nums.begin(), nums.end(), x) == 1){
			return x;
		}
	}
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
