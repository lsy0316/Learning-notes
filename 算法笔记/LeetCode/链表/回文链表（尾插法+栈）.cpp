#include<bits/stdc++.h>
using namespace std;

struct ListNode{
	int val;
	ListNode *next;
	ListNode(int x, ListNode *nextptr = nullptr):val(x),next(nextptr){
	}
};
//判断回文链表(利用栈的先进后出原则判断是否回文）
//空间复杂度：O(n),时间复杂度O(n) 
bool isPalindrome(ListNode* head) {
    stack<int> s;
    ListNode *ptr = head;
    //遍历一遍链表，入栈 
    while(ptr != nullptr){
        s.push(ptr->val);
        ptr = ptr->next;
    }
    ListNode *ptr2 = head;
    while(ptr2 != nullptr){
        if(ptr2->val != s.top() )
            return false;
        //出栈 
        s.pop();
        //更新 
		ptr2 = ptr2->next;
	}
    return true;
} 
int main(){
	int n;
	cin >> n;
	//尾插法 
	ListNode *head = nullptr;
	ListNode *tail = nullptr;
	for(int i = 0; i < n; i++){
		int x;
		cin >> x;
		ListNode *node = new ListNode(x);
		if(head == nullptr){
			head = node;
			tail = node;
		}
		else{
			tail->next = node;
			tail = node;
		}
	}
	if(isPalindrome(head)){
		cout << "true" << endl;
	}
	else{
		cout << "false" << endl;
	}
	return 0;
}
