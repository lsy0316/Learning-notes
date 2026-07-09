#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> generate(int numRows){
	//初始化
	vector<vector<int>> nums(numRows);
	//动态扩容
	for(int i = 0; i < numRows; i++){
		nums[i].resize(i + 1);
		nums[i][0] = 1;
		nums[i][i] = 1;
	} 
	for(int i = 2; i < numRows; i++){
		for(int j = 1; j < i; j++){
			//动态规划
			nums[i][j] = nums[i - 1][j - 1] + nums[i - 1][j];
		}
	}
	return nums;
}
int main(){
	int numRows;
	cin >> numRows;
	vector<vector<int>> nums = generate(numRows);
	for(int i = 0; i < numRows; i++){
		for(int j = 0; j < nums[i].size(); j++){
			cout << nums[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
} 
