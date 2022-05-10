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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(head->next == NULL) return head;
        if(left == right) return head;

        auto dummy = new ListNode(0);
        
        dummy->next = head; 
        auto pre = dummy;
        auto cur = head;

        for(int i = 1;i < left;i++)
        {
            pre = cur;
            cur = cur->next;
        }

        int con = right - left;
        ListNode nex;
        for(int i = 0;i < con;i++){
            auto nex = cur->next;
            cur->next = nex->next;
            nex->next = pre->next;
            pre->next = nex;
        }

        return dummy->next;
    }
};
