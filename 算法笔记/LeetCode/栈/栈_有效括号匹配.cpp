#include<bits/stdc++.h>
using namespace std;

//Õ»
//À¨ºÅÆ¥Åä£ºÓöµ½×óÀ¨ºÅÈëÕ»£¬Óöµ½ÓÒÀ¨ºÅ²é¿´Õ»¶¥ÊÇ·ñÆ¥Åä 
bool isValid(string s){
	stack<char> stk;
	for(int i = 0; i < s.size(); i++){
		if(s[i] == '(' || s[i] == '[' || s[i] == '{'){
			stk.push(s[i]);
		}
		else{
			if(stk.empty()){
				return false;
			}
			else{
				if(s[i] == ')'){
					if(stk.top() != '('){
						return false;
					}
					else{
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
