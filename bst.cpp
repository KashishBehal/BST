class Solution
{
    
    void inorder(Node* root , vector<int>&v){
        if(root==NULL){
            return ;
        }
        inorder(root->left , v);
        v.push_back(root->data);
        inorder(root->right , v);
    }
    public:
    
    //Function to check whether a Binary Tree is BST or not.
    bool isBST(Node* root) 
    {
        vector<int>v;
        inorder(root , v);
        for(int i=0;i<v.size()-1;i++){
            if(v[i]>=v[i+1]){
                return false;
            }
        }
       //inorder of bst is always sorted
       return true;
       
    }
};
