#include<bits/stdc++.h>
using namespace std;
int majorityElement(vector<int>& nums) {
    int n = nums.size();
    //向下取整函数floor()，向上取整函数ceil() 
    int threshold = floor(n / 2);
    for(int i = 0; i < n; i++){
    	int x = nums[i]; 
        if(count(nums.begin(), nums.end(), x) > threshold){
            return nums[i];
        }
    }
    return 0;
}
int main(){
	int n;
	cin >> n;
	vector<int> nums(n);
	for(int i = 0; i < n; i++){
		cin >> nums[i];
	}
	int ans = majorityElement(nums);
	cout << ans <<endl;
	return 0;
}
