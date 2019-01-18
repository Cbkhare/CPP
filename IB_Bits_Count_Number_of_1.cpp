int Solution::numSetBits(unsigned int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still https://assets.interviewbit.com/assets/flying_icons/christmas-e6c601836270000e6a8f61460ed3c57ea09d0df39481a0b3a7263816a73fa947.svg.gzhave a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
        int count = 0;
        while (A>0){
            if (A%2!=0) count+=1;
            A>>=1; // or use A/=2
        }
        return count;
}
