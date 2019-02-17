int Solution::maxProduct(const vector<int> &A) {
    int final=A[0],current=A[0], neg;
    neg=current;
    if (neg==0) neg=INT_MIN;
    for (int i=1;i<A.size();i++){
        if(A[i]==0) neg = INT_MIN;
        else if(neg==INT_MIN) neg = A[i];
        else neg *= A[i];
        current = max(current*A[i], A[i]);
        current = max(current, neg);
        final = max(final, current);
        
    }
    current = A[A.size()-1];
    neg = current;
    if (neg==0) neg = INT_MIN;
    int final1=current;
    for (int i=A.size()-2;i>=0;i--){
    if(A[i]==0) neg = INT_MIN;
    else if(neg==INT_MIN) neg = A[i];
    else neg *= A[i];
    current = max(current*A[i], A[i]);
    current = max(current, neg);
    final1 = max(final1, current);
        
    }
    return max(final,final1);
}

