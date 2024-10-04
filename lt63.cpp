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
        if(head->next==NULL && n==1){
            return nullptr;
        }
        ListNode* current= new ListNode(-1);
        ListNode* saveNode= current;
        current->next=head;
        int count=0;
        //first pass calculating the count 
        while(current!=NULL){
            current=current->next;
            count++;
        }
        current=saveNode;
        int newcount=0;
        //second pass to perform operations;
        while(newcount!=count-n-1){
            newcount++;
            current=current->next;
            
        }
        ListNode* extract = current;
        if(n==1){
            extract->next=NULL;
            return saveNode->next;
        }
        if(current->next->next==NULL){
            extract->next=NULL;
            return saveNode->next;
        }else{
            current=current->next->next;
            ListNode* deletethis= extract->next;
            extract->next= current;
            delete deletethis;
        }


        return saveNode->next;
        
        
    }
};