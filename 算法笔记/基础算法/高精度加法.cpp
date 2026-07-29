#include<bits/stdc++.h>
using namespace std;
//高精度加法
string s1, s2;
int a[101], b[101], c[101];
void stringtoint(string str, int des[]){
	for(int i = 0; i < str.size(); i++){
		des[str.size() - i] = str[i] - '0';
	}
} 
int main(){
	cin >> s1 >> s2;
	//1.个位对齐：反转，字符转整型 
	stringtoint(s1, a);
	stringtoint(s2, b);
	int la = s1.size(), lb = s2.size();
	//2.计算结果数组c的长度，按最长数位算 
	int lc = max(la, lb) + 1;
	//3.对位相加得出c数组
	for(int i = 1; i <= lc; i++){
		c[i] = a[i] + b[i];
		if(c[i] > 10){
			c[i + 1] = c[i] / 10;//进位
			c[i] = c[i] % 10;//留个位
		}
	} 
	//4.去除前导0
	while(c[lc] == 0 && lc > 1) lc--;
	//5.倒叙打印
	for(int i = lc; i >= 1; i--){
		cout << c[i];
	} 
	return 0;
} 
