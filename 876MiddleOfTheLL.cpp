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
    ListNode* middleNode(ListNode* head) {
        ListNode* Heir = head;
        ListNode* Tortoise = head;
        // loop will run until Heir & Heir->next is not equal to NULL 
        while(Heir && Heir->next){\
        // Heir will jump to next 2nd Element of the node
            Heir = Heir->next->next;
            // Tortoise wil jump to next element of the node
            Tortoise = Tortoise->next;
        }        
        // Tortoise is the result == Middle element of the Linked List
        return Tortoise;
    }
};