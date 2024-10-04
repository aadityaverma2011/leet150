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
        ListNode* current= head;
        if(head==NULL){
            return nullptr;
        }
        int count=0;
        while(current!=NULL){
            current=current->next;
            count++;
        }
        int target= count - (k%count);
        if(k%count==0 || count==1){
            return head;
        }
        int i =1 ;
        current=head;
        ListNode* extract;
        while(current!=NULL){
            if(i==target){
                extract = current; 
                break;
            }
            current=current->next;
            i++;
        }
        ListNode* savepoint = extract->next;
        while(current->next!=nullptr){
            current=current->next;
        }

        current->next= head;
        extract->next=NULL;


        return savepoint;


    }
};