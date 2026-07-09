#include<bits/stdc++.h>
using namespace std;

int searchInsert(vector<int>& nums, int target){
	int len = nums.size();
	int left = 0, right = len - 1;
	int middle;
	while(left <= right){
		//二分查找
		middle = left + ((right - left) / 2);
		if(nums[middle] < target){
			left = middle + 1;
		}
		else if(nums[middle] > target){
			right = middle - 1;
		}
		else{
			return middle;
		}
	}
	//未找到目标值，进行大小判断确定插入位置
	if(target < nums[middle]){
		return middle; 
	}
	else{
		return middle + 1;
	} 
}
int main(){
	int n, target;
	cin >> n;
	vector<int> nums(n);
	for(int i = 0;i < n; i++){
		cin >> nums[i];
	} 
	cin >> target;
	int ans = searchInsert(nums, target);
	cout << ans << endl;
	return 0;
}
