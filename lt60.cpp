/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(head==NULL){
            return nullptr;
        }
        unordered_map<Node*,Node*> bind;
        Node* current;
        current= head;
        while(current!=NULL){
            Node* newNode = new Node(current->val);
            bind[current]= newNode;
            current=current->next;
        }

        current=head;
        while(current!=NULL){
            bind[current]->next= bind[current->next];
            bind[current]->random= bind[current->random];
            current=current->next;
        }

        current= head;
        return bind[current];
    }
};