unordered_map<int, int> rdec;
unordered_map<int, int> sdec;

void fun(const vector<int> &A, int i){
    if (i==A.size()-1){
        sdec[i]=0;
    }
    else{
        fun(A, i+1);
        int count = 0;
        for(auto itr=sdec.begin(); itr!=sdec.end();itr++ ){
            if(A[i] > A[itr->first]){
                count = max(count, itr->second+1);
            }
        }
    }
    return ;
}

void rfun(const vector<int> &A, int i){
    if (i==0){
        rdec[i]=0;
    }
    else{
        rfun(A, i-1);
        int count = 0;
        for(auto itr=rdec.begin(); itr!=rdec.end();itr++ ){
            if(A[i]>A[itr->first]){
                count = max(count, itr->second+1);
            }
        }
    }
    return;
}


int Solution::longestSubsequenceLength(const vector<int> &A) {
    rdec.clear();
    sdec.clear();
    ::fun(A, 0);
    ::rfun(A, A.size()-1);
    int max_count = 0;
    for(int i=0; i<A.size();i++){
        max_count = max(max_count, sdec[i]+rdec[i]+1);
    }
    return max_count;
}
