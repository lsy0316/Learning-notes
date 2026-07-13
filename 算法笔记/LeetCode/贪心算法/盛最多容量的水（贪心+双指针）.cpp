#include<bits/stdc++.h>
using namespace std;

int maxArea(vector<int>& height, int n){
	int maxarea = 0;
	int left = 0, right = n - 1;
	while(left < right){
		int minnum = height[left] <= height[right]?height[left]:height[right];
		int area = minnum * (right - left);
		if(area > maxarea){
			maxarea = area;
		}
		if(minnum == height[left]){
			left++;
		}
		else{
			right--;
		}
	}
	return maxarea;
}
int main(){
	int n;
	cin >> n;
	vector<int> height(n);
	for(int i = 0; i < n; i++){
		cin >> height[i];
	}
	int ans = maxArea(height, n); 
	cout << ans << endl;
	return 0;
}
