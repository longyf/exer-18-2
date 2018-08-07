#ifndef print_list_h
#define print_list_h
#include <iostream>
#include "/Users/long/workarea/to_offer/exer-18/listNode.h"
using namespace std;
void printList(ListNode **pListHead) {
	ListNode *pNode = *pListHead;
	while (pNode != nullptr) {
		cout<<pNode->value<<" ";
		pNode = pNode->next;
	}
	cout<<endl;
}
#endif
