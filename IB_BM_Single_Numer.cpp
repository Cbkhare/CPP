int Solution::singleNumber(const vector<int> &A) {
    int s=0;
    for (int i=0;i<A.size();i++){
        s ^= A[i];
    }
    return s;
}
