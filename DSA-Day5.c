struct TreeNode* searchBST(struct TreeNode* root, int val)
{
    struct TreeNode *temp = root;
    while(temp != NULL && (temp->right != NULL || temp->left != NULL))
    {
        if(temp->val == val) 
        {
            return root;
        }
        else if(val > temp->val)
        {
            root = root->right;
            temp = temp->right;
        }
        else
        {
            root = root->left;
            temp = temp->left;
        }
    }
    if(temp == NULL)
    {
        return NULL;
    }
    else if(temp->val == val) 
        {
            return root;
        }
    else
        return NULL;
}