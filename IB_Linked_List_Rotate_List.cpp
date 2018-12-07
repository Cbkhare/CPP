ListNode* Solution::rotateRight(ListNode* A, int B) {
    ListNode* old;
    ListNode* back;
    ListNode* head;
    head= A;
    int size_of_list=0,k=0;
    bool first = false;
    while(A) {
        size_of_list+=1;
        A = A->next;
    }
    B %= size_of_list;
    if (B==0) return head;
    A = head; //IMP
    while (A){
        if (k==B){
            if (first){
                back = head;
                first = false;
            }
            else back = back->next;
        }
        else{
            k+=1;
            if (k==B) first=true;
        }
        old = A;
        A=A->next;
    }
    ListNode* new_head;
    new_head = back->next;
    back->next = NULL;
    old->next = head;
    return new_head;
}
