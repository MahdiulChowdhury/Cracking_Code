/*
Given a linked list, reverse the nodes of a linked list k at a time and return its modified list.

k is a positive integer and is less than or equal to the length of the linked list. If the number of nodes is not a multiple of k then left-out nodes in the end should remain as it is.

Example:

Given this linked list: 1->2->3->4->5

For k = 2, you should return: 2->1->4->3->5

For k = 3, you should return: 3->2->1->4->5

Note:

    Only constant extra memory is allowed.
    You may not alter the values in the list's nodes, only nodes itself may be changed.


*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* reverseLinkedList(ListNode *head,int k){ 
        ListNode* current_node = head; 
        ListNode* next_node = NULL;
        ListNode* previous_node = NULL;
        int count = 0; 
        
        while (count<k){
            next_node = current_node->next; 
            current_node->next = previous_node; 
            previous_node = current_node; 
            current_node = next_node; 
            count++;
        }
        return previous_node; 
    }
        
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* current_node = head; //current will change, as head changes every function call 
        int count=0; 
     
        //are there at least k nodes left in the linked list 
        while (current_node != NULL && count < k)
        {   
            count++; 
            current_node = current_node->next; 
        }
        //cout << "current_node" << current_node->val << endl; 
    
        //reverse the k nodes 
        if (count == k){
            ListNode* reversed_head_node = reverseLinkedList(head,k);
           
            head->next = reverseKGroup(current_node,k);
            
            return reversed_head_node; 
        }
        
        return head; 
    }
};