int Solution::evalRPN(vector<string> &A) {
    stack<int> st;
    int n,n1,n2;
    for( int i=0; i<A.size();i++){
        if (A[i]=="/" || A[i]=="*" || A[i]=="-" || A[i]=="+"){
            n1=st.top();
            st.pop();
            n2=st.top();
            st.pop();
            if(A[i]=="/"){
                n = n2/n1;
            }
            else if(A[i]=="+"){
                n = n2+n1;
            }
            else if(A[i]=="-"){
                n = n2-n1;
            }
            else{
                n=n2*n1;
            }
            st.push(n);
        }
        else {
            st.push(stoi(A[i]));
        }
    }
    return st.top();
