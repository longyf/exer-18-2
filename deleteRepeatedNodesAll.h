#ifndef delete_repeated_nodes_all_h
#define delete_repeated_nodes_all_h
#include <iostream>
#include <stdexcept>
#include "../exer-18/listNode.h"
using namespace std;

void deleteRepeatedNodesAll(ListNode **pListHead) {
	if (pListHead == nullptr)
		throw invalid_argument("Invalid inputs.");
	if (*pListHead == nullptr || (*pListHead)->next == nullptr)
		return;

	//处理头结点	
	if ((*pListHead)->value == (*pListHead)->next->value) {
		while ((*pListHead)->next != nullptr && (*pListHead)->value == (*pListHead)->next->value) {
			ListNode *pToBeDeleted = (*pListHead);
			(*pListHead) = (*pListHead)->next;
			delete pToBeDeleted;
			pToBeDeleted = nullptr;
		}
		ListNode *pToBeDeleted = (*pListHead);
		(*pListHead) = (*pListHead)->next;
		delete pToBeDeleted;
		pToBeDeleted = nullptr;

		if ((*pListHead) == nullptr) return;
	}

	//不用处理头结点
	ListNode *pNode = (*pListHead);

	while (pNode->next != nullptr && pNode->next->next != nullptr) {
		if (pNode->value != pNode->next->value) pNode = pNode->next;
		else {
			while (pNode->next != nullptr && pNode->value == pNode->next->value) {
				cout<<"abc1"<<endl;
				ListNode *pToBeDeleted = pNode;
				pNode = pNode->next;
				delete pToBeDeleted;
				pToBeDeleted = nullptr;
			}
			cout<<"abc2"<<endl;
			ListNode *pToBeDeleted = pNode;
			pNode = pNode->next;
			delete pToBeDeleted;
			pToBeDeleted = nullptr;

			if (pNode == nullptr) return;
		}
	}
}
#endif
