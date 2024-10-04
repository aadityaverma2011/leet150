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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* curr1= l1;
        ListNode* curr2=l2;
        ListNode* current= new ListNode(-1);
        ListNode* dummyhead = current;
        int carry=0;
        while(curr1!=NULL || curr2!=NULL){
            int temp1;
            int temp2;
            if(curr1==NULL){
                temp1=0;
            }else{
                temp1=curr1->val;
            }
            if(curr2==NULL){
                temp2=0;
            }
            else{
                temp2=curr2->val;
            }
            int sum = temp1 + temp2;
            sum=sum+carry;
            carry= sum/10;
            sum= sum%10;
            ListNode* newest= new ListNode(sum);
            dummyhead->next= newest;
            if(curr1!=NULL){
                curr1=curr1->next;
            }
            if(curr2!=NULL){
                curr2=curr2->next;
            }
            dummyhead=dummyhead->next;
        }
        if(carry!=0){
            ListNode* newest = new ListNode(carry);
            dummyhead->next = newest;
            dummyhead=dummyhead->next;
        }

        return current->next;
    }
};