unsigned int Solution::reverse(unsigned int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    long ans=0;
    for (int i=1;i<=32;i++){
        if(A%2==0){
            // Only append zero in the back
            ans<<=1;
        }
        // else append zero+1
        else ans = (ans<<1) +1;
        A>>=1; //or use A/=2
    }
    return ans;
}
