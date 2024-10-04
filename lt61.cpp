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

    ListNode* reverseBetween(ListNode* head, int left, int right){
        if(head==NULL || left==right || head->next==NULL){
            return head;
        }
        ListNode* prev= NULL;
        ListNode* current = head;
        int i=1;
        while(current!=NULL && i!=left){
            prev=current;
            current=current->next;
            i++;
        }
        ListNode* savednode = prev;
        ListNode* startnode= current;
        prev= NULL;
        while(current!=NULL && i!=right+1){
            ListNode* nodecapture=current->next;
            current->next=prev;
            prev=current;
            current=nodecapture;
            i++;
        }
        if(savednode!=NULL){
            savednode->next = prev;
        }
        else{
            head= prev;
        }
        startnode->next= current;


        return head;
    }
};