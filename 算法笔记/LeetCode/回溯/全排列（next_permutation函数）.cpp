#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> permute(vector<int>& nums){
	vector<vector<int>> ans;
	//ÅÅÐò 
	sort(nums.begin(), nums.end());
	//È«ÅÅÁÐ 
	do{
		ans.push_back(nums);
	}while(next_permutation(nums.begin(), nums.end()));
	return ans;
}
int main(){
	int n;
	cin >> n;
	vector<int> nums(n);
	for(int i = 0; i < n; i++){
		cin >> nums[i];
	}
	vector<vector<int>> ans = permute(nums);
	for(int i = 0; i < ans.size(); i++){
		for(int j = 0; j < ans[i].size(); j++){
			cout << ans[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}
