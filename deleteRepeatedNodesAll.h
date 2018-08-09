#ifndef delete_repeated_nodes_all_h
#define delete_repeated_nodes_all_h
#include <iostream>
#include <stdexcept>
#include "../exer-18/listNode.h"
using namespace std;

void deleteRepeatedNodesAll(ListNode **pListHead) {
	if (pListHead == nullptr || *pListHead == nullptr)
		return;

	ListNode *pNodePre = nullptr;
	ListNode *pNode = *pListHead;
	ListNode *pNodeNext = nullptr;
	while (pNode != nullptr) {
		pNodeNext = pNode->next;
		//这个if表示pNode已经到最后一个节点了。
		if (pNodeNext == nullptr) return;
		//pNode后面还有节点，并且pNode和后面的节点不重复。
		if (pNodeNext != nullptr && pNodeNext->value != pNode->value) {
			//pNodePre指向pNode前一个节点。
			pNodePre = pNode;
			//pNode指向下一个节点。
			pNode = pNodeNext;
		}
		else {
			//pNode后面有节点，并且pNode后面的节点和pNode重复，需要把包括pNode在内的所有重复节点删除。
			int valueDel = pNode->value;
			while (pNode != nullptr && pNode->value == valueDel) {
				//这个while表示删除所有重复节点，知道后面的节点都被删光了，或者即使后面还有节点，但是已经不重复了。挑出这个循环后pNode指向后面第一个不重复的节点，或者nullptr。
				ListNode *pToBeDel = pNode;
				pNode = pNode->next;
				delete pToBeDel;
				pToBeDel = nullptr;
			}
		}

		//把pNode之前的节点和pNode连起来。
		if (pNodePre == nullptr) {
			//这时说明删除了头节点。
			*pListHead = pNode;
		}
		else {
			//没有删除头节点。
			pNodePre->next = pNode;
		}

	}

}
#endif
