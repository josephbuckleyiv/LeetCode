/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

        std::stack<ListNode*> list1;
        int firstNum = 0;

        std::stack<ListNode*> list2;
        int secondNum = 0;

        ListNode* currNode = l1;

        while (currNode != nullptr) {
            list1.push(currNode);
            currNode = currNode->next;

        }

        currNode = l2;
        while (currNode != nullptr) {
            list2.push(currNode);
            currNode = currNode->next;
        }

        int decimalPlace = 0;
        while (!list1.empty()) {
            firstNum = firstNum + pow(10, decimalPlace) * list1.top()->val;
            list1.pop();
        }

        decimalPlace = 0;
        while (!list2.empty()) {
            secondNum = secondNum + pow(10, decimalPlace) * list1.top()->val;
            list2.pop();
        }

        cout << firstNum + secondNum;
        return l1;
        
    }
};
