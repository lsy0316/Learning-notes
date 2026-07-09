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

//反转链表 (双指针法） 
//时间复杂度O(n),空间复杂度O(1) 
ListNode* reverseList(ListNode* head){
	ListNode *newhead = nullptr;
	ListNode *ptr = head;
	while(ptr != nullptr){
		ListNode *next = ptr->next;
		ptr->next = newhead;
		newhead = ptr;
		ptr = next;
	} 
	return newhead;
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
	//反转链表
	ListNode *head2 = reverseList(head);
	//输出结果 
	ListNode *ptr1 = head2;
	while(ptr1 != nullptr){
		cout << ptr1->val << " ";
		ptr1 = ptr1->next;
	} 
	return 0;
}
