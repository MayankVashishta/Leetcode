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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp = head;
        int length = 0;
        while (temp != NULL) {
            length++;
            temp = temp->next;
        }
        int index = length - n;
        if(index == 0) return head= head->next;
        // traverse to the given node
        temp = head;
        for(int i=0 ; i<index-1 ; i++){
            temp = temp -> next; // index-1 so that we reach just before required index
        }
        ListNode* todelete = temp->next;
        temp-> next = temp->next->next;
        delete todelete;
        return head;
    }
};