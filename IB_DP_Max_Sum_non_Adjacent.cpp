
int Solution::adjacent(vector<vector<int> > &A) {
    if (A.size()==0) return 0;
    if (A[0].size()==1) return max(A[0][0],A[1][0]);
    int l = A[0].size();
    for(int i=0;i<l;i++){
        int t1,t2;
        if (i-3<0) t1=0;
        else t1=max(A[0][i-3],A[1][i-3]);
        if (i-2<0) t2=0;
        else t2=max(A[0][i-2],A[1][i-2]);
        A[0][i] = A[0][i] + max(t1,t2);
        A[1][i] = A[1][i] + max(t1,t2);
        
    }
    return max({A[0][l-1],A[1][l-1],A[0][l-2],A[1][l-2]});
}
