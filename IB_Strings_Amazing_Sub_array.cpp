int Solution::solve(string A) {
    int l = A.size();
    int c = 0;
    unordered_set<char> st = {'a','e','i','o','u','A','E','I','O','U'};
    for (int i=0;i<A.size();i++){
        if (st.find(A[i]) != st.end()){
            c += l-i;
        }
    }
    return c%10003;
}
