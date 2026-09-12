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
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode*s=head;
        ListNode*t=head;
        if(k==0)return head;

        if(t==nullptr||t->next==nullptr)
            return head;

        int n=1;

        while(t->next!=nullptr){
            n++;
            t=t->next;
        }
        k=k%n;
        
        if(k==0)return head;

        n=n-k;
        
        while(n!=1){
            s=s->next;
            n--;
        }
        ListNode*sol=s->next;
        t->next=head;
        s->next=nullptr;
        return sol; 
    }
};