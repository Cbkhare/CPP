int Solution::maxp3(vector<int> &A) {
    sort(A.begin(),A.end());
    int l =A.size();
    int x=A[0]*A[1], y=A[l-1]*A[l-2];
    int mx=INT_MIN,my=INT_MIN;
    //mx = (x>0) ? INT_MIN : INT_MAX;
    //my = (y>0) ? INT_MIN : INT_MAX;
    for(int i=2;i<l;i++)   mx=max(mx,x*A[i]);
    for(int i=0;i<l-2;i++) my=max(my,y*A[i]);
    return max(mx,my);
}
