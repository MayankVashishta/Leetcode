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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* modify = head -> next;
        ListNode* nextsum = modify;
        while(nextsum != NULL){
            int sum  = 0 ;
            while(nextsum->val != 0){
                sum+=nextsum->val;
                nextsum=nextsum -> next;
            }
        modify -> val = sum; // modify ke val mai sum aagya
        nextsum = nextsum -> next ; // skip zero in next block 
        modify -> next = nextsum; // next block ko point karao
        modify = modify -> next;
        }
        return  head->next; 
    }
};