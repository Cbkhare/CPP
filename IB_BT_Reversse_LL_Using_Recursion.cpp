ListNode* head;
void reverse(ListNode* A){
    if (A->next==NULL){
        head = A;
    }
    else{
        reverse(A->next);
        ListNode* temp = A->next;
        A->next = NULL;
        temp->next = A;
    }
    return ;
}
ListNode* Solution::reverseList(ListNode* A) {
    reverse(A);
    return head;
}
