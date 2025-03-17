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
    ListNode* reverse(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* curr = head;
        ListNode* nextptr = nullptr;
        while (curr != NULL) {
            nextptr = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextptr;
        }
        return prev;
    }

    ListNode* findkth(ListNode* temp, int k) {
        k -= 1;

        while (temp != NULL & k > 0) {
            k--;
            temp = temp->next;
        }
        return temp;
    }

    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* temp = head;
        ListNode* prev = NULL;
        while (temp != NULL) {
            ListNode* kthnode = findkth(temp, k);
            if (kthnode == NULL) {
                if (prev)
                    prev->next = temp;
                break;
            }
            ListNode* nextnode = kthnode->next;
            kthnode->next = NULL;
            reverse(temp);

            if (temp == head)
                head = kthnode;
            else
                prev->next = kthnode;

            prev = temp; // remeber the prev before jumping to next k-group
            temp = nextnode; // go to the next node
        }
        return head;
    }
};