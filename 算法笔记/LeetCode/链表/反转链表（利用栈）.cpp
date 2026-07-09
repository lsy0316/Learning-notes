#include<bits/stdc++.h>
using namespace std;
//链表结构体 
struct ListNode{
	int val;//数据域 
	ListNode *next;//指针域 
	//构造函数 
	ListNode(int x, ListNode *nextptr = nullptr):val(x), next(nextptr){
	}
};

//反转链表 
ListNode* reverseList(ListNode* head){
	stack<int> s;
	ListNode *ptr1 = head;
	while(ptr1 != nullptr){
		//入栈 
		s.push(ptr1->val);
		ptr1 = ptr1->next;
	}
	ListNode *ptr2 = head;
	while(ptr2 != nullptr){
		ptr2->val = s.top();
		s.pop();
		//出栈 
		ptr2 = ptr2->next;
	}
	return head;
}
int main(){
	int n;
	cin >> n;
	ListNode *head = nullptr;
	ListNode *tail = nullptr;
	
	for(int i = 0; i < n; i++){
		int x;
		cin >> x;
		//创建新节点 
		ListNode *node = new ListNode(x);
		//第一次插入 
		if(head == nullptr){
			head = node;
			tail = node;
		}
		else{
			//尾部连接新节点 
			tail->next = node;
			//更新尾指针 
			tail = node;
		}
	}
	//遍历链表
	ListNode *ptr = head;
	while(ptr != nullptr){
		cout << ptr->val << " ";
		ptr = ptr->next;
	} 
	//反转链表
	ListNode *head2 = reverseList(head);
	ListNode *ptr1 = head2;
	while(ptr1 != nullptr){
		cout << ptr1->val << " ";
		ptr1 = ptr1->next;
	} 
	return 0;
}
