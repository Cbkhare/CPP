int Solution::findMinXor(vector<int> &A) {
    sort(A.begin(), A.end());
    int mn=1000000;
    for (int i=A.size()-1; i>0;i--){
        mn = min(mn,A[i]^A[i-1]);
    }
    return mn;
}

/*
XOR will be minimum between 2 numbers when they are nearer to each other,
check via XOR properties
*/
