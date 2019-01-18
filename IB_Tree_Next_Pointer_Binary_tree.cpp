void Solution::connect(TreeLinkNode* A) {
    TreeLinkNode* curr=A;
    while (curr!=NULL){
        TreeLinkNode* temp=curr;
        while (temp and temp->left !=NULL){
            temp->left->next = temp->right;
            if (temp->next!=NULL and temp->next->left!= NULL){
                temp->right->next = temp->next->left;
            }
            temp = temp->next;
        }
        curr = curr->left;
    }
}
