    /*
    // Definition for a Node.
    class Node {
    public:
        int val;
        Node* left;
        Node* right;
        Node* next;

        Node() : val(0), left(NULL), right(NULL), next(NULL) {}

        Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

        Node(int _val, Node* _left, Node* _right, Node* _next)
            : val(_val), left(_left), right(_right), next(_next) {}
    };
    */

    class Solution {
    public:
        Node* connect(Node* root) {
            if(root==nullptr){
                return nullptr;
            }
            queue<Node*> q;
            q.push(root);
            
            while(!q.empty()){
                int n= q.size();
                Node* prev = NULL;
                while(n--){
                    Node* current = q.front();
                    q.pop();
                    if(prev!=NULL){
                        prev->next= current;
                    }
                    prev=current;
                    if(current->left!=nullptr){
                        q.push(current->left);
                    }
                    if(current->right!=nullptr){
                        q.push(current->right);
                    }
                }
                prev->next=nullptr;
            }
            return root;
        }
        
    };