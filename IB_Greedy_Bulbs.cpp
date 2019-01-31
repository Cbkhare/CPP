int Solution::bulbs(vector<int> &A) {
    int flip=0;
    int count =0;
    for (int i=0; i<A.size();i++){
        if (flip%2==0){
            if (A[i]==0){
                flip+=1;
                count+=1;
            }
            else continue;
        }
        else{
            if (A[i]==1){
                flip+=1;
                count+=1;
            }
        }
    }
    return count;
}
