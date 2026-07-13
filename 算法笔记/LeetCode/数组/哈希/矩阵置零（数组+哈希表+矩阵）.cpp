#include<bits/stdc++.h>
using namespace std;

void setZeroes(vector<vector<int>>& matrix){
	int m = matrix.size();
	int n = matrix[0].size();
	vector<vector<int>> flag(m, vector<int>(n));
	//记录原来为0的位置 
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			if(matrix[i][j] == 0){
				flag[i][j] = 1;
			}
		}
	}
	//根据flag置零 
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			if(flag[i][j] == 1){
				for(int k = 0; k < m; k++){
					matrix[k][j] = 0;
				}
				for(int k = 0; k < n; k++){
					matrix[i][k] = 0;
				}
			}
		}
	}
}

int main(){
	int m, n;
	cin >> m >> n;
	vector<vector<int>> matrix(m, vector<int>(n));
	//输入矩阵 
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			cin >> matrix[i][j];
		}
	}
	setZeroes(matrix);
	//输出结果 
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			cout << matrix[i][j] << " "; 
		}
		cout << endl;
	}
	return 0; 
}
