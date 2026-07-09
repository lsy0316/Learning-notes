#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> generate(int numRows){
	//≥ı ºªØ
	vector<vector<int>> nums(numRows);
	//¿©»›
	for(int i = 0; i < numRows; i++){
		nums[i].resize(i + 1);
		nums[i][0] = 1;
		nums[i][i] = 1;
	} 
	for(int i = 2; i < numRows; i++){
		for(int j = 1; j < i; j++){
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
