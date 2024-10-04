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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* dummy= new ListNode(-1);
        dummy->next=head;
        ListNode* current= dummy;
        ListNode* prev = dummy;
        current=current->next;
        while(current!=NULL){
            if(current->next!=NULL && current->val!=current->next->val){
                prev=current;
                current=current->next;
            }else if(current->next!=NULL && current->val==current->next->val){
                while(current->next!=NULL && current->val==current->next->val){
                    current=current->next;
                }
                if(current->next==NULL){
                    prev->next=NULL;
                }
                else{
                current=current->next;
                prev->next=current;
                }
            }
            else if(current->next==NULL){
                prev=current;
                current=current->next;

            }
        }

        return dummy->next;
    }
};