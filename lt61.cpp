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

    ListNode* reverse(ListNode* head, int left, int right){
        int count=1;
        ListNode* dummy;
        dummy=head;
        ListNode* current=dummy;
        ListNode* current2=dummy;
        int l;
        int midpoint= left+(right-left)/2;
        bool leftstop=false;
        bool rightstop=true;    
        while(current2!=nullptr){    
            if(count!=left && leftstop==false){
                current=current->next;
            }
            else{
                leftstop=true;
            }
            if(count!=midpoint && rightstop==false){
                current2=current2->next;
            }
            else{
                rightstop=true;
            }
            if(leftstop && rightstop){
                int newcount=midpoint;
                while(newcount!=right){
                    swap(current->val,current2->val);
                    current=current->next;
                    current2=current2->next;
                    newcount++;
                }
            }
            count++;
        }

        return head;
    }
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode* dummy;
        dummy= reverse(head, left, right);
        ListNode* dummy2;
        int midpoint = left+(right-left)/2;
        dummy2= reverse(dummy,left,midpoint);
        ListNode* dummy3;
        dummy3=reverse(dummy,midpoint,right);

        return dummy;
    }
};