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
    ListNode* oddEvenList(ListNode* head) {
        if(head==nullptr || head->next==nullptr) return head;
        ListNode*odd=head;
        ListNode*even=head->next;

        if(even->next==nullptr) return head;
        ListNode*a=head;
        ListNode*b=head->next;

        while(b!=nullptr && b->next!=nullptr){
            a->next=b->next;
            a=a->next;
            b->next=a->next;
            b=b->next;
        }
        a->next=even;

        return head;
    }
};