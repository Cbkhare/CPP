int Solution::removeDuplicates(vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int i=0,j=1,t=1;
    bool find = true;
    while (j<A.size()){
        if (A[i]!=A[j]){
            A[t]=A[j];
            find=true;
            t+=1;
        }
        else if(A[i]==A[j] and find){
            A[t]=A[j];
            t+=1;
            find=false;
        }
        i+=1;
        j+=1;
    }
    return t;
}
