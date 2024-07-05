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
        int count=0;
        ListNode* dummy=head;
        while(dummy!=nullptr){
            count++;
            dummy=dummy->next;
        }
        if(count==1){
            return nullptr;
        }
         int target=count-n+1;
         if(target==1){
            ListNode* current= head;
            return current->next;
         }
        ListNode* dummy2=head;
         for (int i = 0; i < target - 2; i++) {
            dummy2 = dummy2->next;
        }
        ListNode* nodeToDelete = dummy2->next;
        dummy2->next = dummy2->next->next;
        delete nodeToDelete;
        return head;
    }
};