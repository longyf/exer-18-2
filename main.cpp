#include <iostream>
#include "deleteRepeatedNodes.h"
#include "/Users/long/workarea/to_offer/exer-18/listNode.h"
#include "printList.h"
using namespace std;

void test1() {
	cout<<"Test1()"<<endl;
	ListNode *p1 = new ListNode(1);
	ListNode *p2 = new ListNode(1);
	ListNode *p3 = new ListNode(1);
	ListNode *p4 = new ListNode(2);
	ListNode *p5 = new ListNode(3);
	ListNode *p6 = new ListNode(4);
	ListNode *p7 = new ListNode(4);
	ListNode *p8 = new ListNode(4);
	ListNode *p9 = new ListNode(5);
	ListNode *p10 = new ListNode(6);
	ListNode *p11 = new ListNode(6);

	p1->next = p2;
	p2->next = p3;
	p3->next = p4;
	p4->next = p5;
	p5->next = p6;
	p6->next = p7;
	p7->next = p8;
	p8->next = p9;
	p9->next = p10;
	p10->next = p11;

	printList(p1);
	deleteRepeatedNodes(p1);
	printList(p1);
	deleteRepeatedNodes(p1);
	printList(p1);
}

void test2() {
	cout<<"Test2()"<<endl;
	ListNode *p1 = new ListNode(1);
	printList(p1);
	deleteRepeatedNodes(p1);
	printList(p1);
}

void test3() {
	cout<<"Test3()"<<endl;
	ListNode *p1 = nullptr;
	printList(p1);
	deleteRepeatedNodes(p1);
	printList(p1);
}

void test4() {
	cout<<"Test4()"<<endl;
	ListNode *p1 = new ListNode(1);
	ListNode *p2 = new ListNode(1);
	ListNode *p3 = new ListNode(1);
	p1->next = p2;
	p2->next = p3;
	printList(p1);
	deleteRepeatedNodes(p1);
	printList(p1);
}

void test5() {
	cout<<"Test5()"<<endl;
	ListNode *p1 = new ListNode(1);
	ListNode *p2 = new ListNode(2);
	ListNode *p3 = new ListNode(3);
	p1->next = p2;
	p2->next = p3;
	printList(p1);
	deleteRepeatedNodes(p1);
	printList(p1);
}

int main() {
	test1();
	test2();
	test3();
	test4();
	test5();
	return 0;
}
