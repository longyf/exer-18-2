#ifndef delete_repeated_nodes_h
#define delete_repeated_nodes_h
#include <iostream>
#include <stdexcept>
#include "/Users/long/workarea/to_offer/exer-18/listNode.h"
using namespace std;

void deleteRepeatedNodes(ListNode *pListHead) {
	if (pListHead == nullptr)
		return;

	ListNode *pNode = pListHead;
	while (pNode->next != nullptr) {
		if (pNode->value != pNode->next->value) 
			pNode = pNode->next;
		else {
			while (pNode->value == pNode->next->value) {
				ListNode *pToBeDeleted = pNode->next;
				pNode->next = pNode->next->next;
				delete pToBeDeleted;
				pToBeDeleted = nullptr;
				if (pNode->next == nullptr) break;
			}
		}
	}
}

#endif
