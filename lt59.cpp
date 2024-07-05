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
class Solution
{
public:
    ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
    {
        ListNode *dummyHead = new ListNode();
        ListNode *current = dummyHead;
        ListNode *temp1 = list1;
        ListNode *temp2 = list2;
        while (temp1 != NULL || temp2 != NULL)
        {
            ListNode *newNode;
            if (temp1 != NULL && (temp2 == NULL || temp1->val < temp2->val))
            {
                newNode = new ListNode(temp1->val);
                temp1 = temp1->next;
            }
            else if (temp2 != NULL)
            {
                newNode = new ListNode(temp2->val);
                temp2 = temp2->next;
            }
            else    
            {
                newNode = new ListNode(temp2->val);
                temp2 = temp2->next;
                current->next = newNode;
                current = current->next;
                newNode = new ListNode(temp1->val);
                temp1 = temp1->next;
            }
            current->next = newNode;
            current = current->next;
        }
        if (temp1 != NULL)
        {
            ListNode *newNode;
            while (temp1 != NULL)
            {
                newNode = new ListNode(temp1->val);
                temp1->next;
                current->next = newNode;
                current = current->next;
            }
        }
        if (temp2 != NULL)
        {
            ListNode *newNode;
            while (temp2 != NULL)
            {
                newNode = new ListNode(temp2->val);
                temp2 = temp2->next;
                current->next = newNode;
                current = current->next;
            }
        }
        return dummyHead->next;
    }
};