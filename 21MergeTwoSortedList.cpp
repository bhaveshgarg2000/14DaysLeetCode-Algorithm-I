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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
    //    recursive Approach
    // Base case 1
    // if list1 is empty then return list2
        if(list1 == NULL){
            return list2;

        }
        // base case 2
        // if list2 is empty then return list1

        if(list2 == NULL){
            return list1;
        }
// checking if val in list1 is less than the value of list 2 then we will send those values to the next pf list 1 and sending all the elements of list 2 in list1
        if(list1 ->val <= list2 -> val){
            list1 -> next = mergeTwoLists(list1 ->next,list2);
            return list1;
        }else{
// checking if val in list2 values is less than the value of list1 then we will send those values to the next of list 2 and sending all the elements of list1 in list2

            list2 -> next = mergeTwoLists(list1,list2 -> next );
            return list2;
        }
    }
};