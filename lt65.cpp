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
        //count the number  of nodes in the linked list
       if(head==nullptr || k==0){
        return head;
       }
       int length = 0 ; 
       ListNode* tail = head;
       while(tail->next!=nullptr){
        length++;
        tail=tail->next;
       }
       length++;
       tail->next=head;
       int rotatepoint= length-k%length;
       tail= head;
       while(rotatepoint-- > 1){
        tail=tail->next;
       }
       head=tail->next;
       tail->next=nullptr;
       return head;


    }
};