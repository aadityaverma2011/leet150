
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
    ListNode* partition(ListNode* head, int x) {
        ListNode* current = head;
        
        if (current == nullptr) {
           
            return head;
        }
        int value = x;
        
        ListNode* firstpoint= new ListNode(-1);
        ListNode* firstpointstart= firstpoint;
        ListNode* greater= new ListNode(-1);
        ListNode* greaterstart = greater;
        while(current!=NULL){
            if(current->val<value){
                firstpoint->next=current;
                firstpoint=firstpoint->next;
            }
            if(current->val>=value){
                greater->next= current;
                greater=greater->next;
            }
            current=current->next;
        }
        if(current==NULL){
            greater->next=nullptr;
        }
        firstpoint->next=greaterstart->next;

        return firstpointstart->next;
    }
};