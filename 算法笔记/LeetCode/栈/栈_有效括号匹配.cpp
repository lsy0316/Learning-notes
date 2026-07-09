#include<bits/stdc++.h>
using namespace std;

//栈
//括号匹配：遇到左括号入栈，遇到右括号查看栈顶是否匹配
//空间复杂度O(n),时间复杂度O(n)
bool isValid(string s){
	stack<char> stk;
	for(int i = 0; i < s.size(); i++){
		//如果是左括号，入栈
		if(s[i] == '(' || s[i] == '[' || s[i] == '{'){
			stk.push(s[i]);
		}
		else{
			//右括号
			//判断栈是否为空
			if(stk.empty()){
				return false;
			}
			else{
				if(s[i] == ')'){
					//查看栈顶元素是否匹配
					if(stk.top() != '('){
						return false;
					}
					else{
						//匹配，出栈
						stk.pop();
					}
				}
				else if(s[i] == ']'){
						if(stk.top() != '['){
							return false;
						}
						else{
							stk.pop();
						}
				}
				else if(s[i] == '}'){
					if(stk.top() != '{'){
						return false;
					}
					else{
						stk.pop();
					}
				}
			}
		}
	}
	if(stk.empty()){
		return true;
	}
	else{
		return false;
	}
}
int main(){
	string s;
	cin >> s;
	if(isValid(s)){
		cout << "true" << endl;
	}
	else{
		cout << "false" << endl;
	}
	return 0;
}
