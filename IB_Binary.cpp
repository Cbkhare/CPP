string Solution::findDigitsInBinary(int A) {
    if (A==0 or A==1){
        return to_string(A);
    }
    string result;
    while (A>1){
        result = to_string(A%2) + result;
        A/=2;
        if(A==1) {result= '1'+ result;break;}
    }
    return result;
}
