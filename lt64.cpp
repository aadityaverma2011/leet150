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
        ListNode* current= head;
        ListNode* prev= nullptr;
        while(current!=nullptr){
            if(current->next!=nullptr && current->val==current->next->val){
                int val = current->val;
                while(current!=nullptr && current->val==val ){
                    current=current->next;
                }
                if(prev==nullptr){
                    head=current;
                }
                else{
                    prev->next=current;
                }
            }else{
                prev=current;
                current=current->next;
            }
        }
        return head;
    }
};