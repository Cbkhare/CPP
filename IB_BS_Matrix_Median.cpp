int Solution::findMedian(vector<vector<int> > &A) {
    int c=A[0].size(),r=A.size();
    int mn=A[0][0],mx =A[0][c-1];
    for(int i=0; i<r;i++){
        mn = min(mn,A[i][0]);
        mx = max(mx,A[i][c-1]);
    }
    int t = (r*c + 1)/2;
    while (mn<mx){
        int mid = mn + (mx-mn)/2;

        int place = 0, self_count =0;

        // Find count of elements smaller than mid

        for (int i = 0; i < r; i++) {
            if (A[i][c-1]<mid){
                place+=c;
                continue;
            }
            for(int j=0;j<c;j++) {
                if (A[i][j]>mid){
                    break;
                }
                else if(A[i][j]==mid) self_count+=1;
                else    place+=1;
            }

        }
        if (place < t-self_count)
            mn = mid + 1;
        else
            mx = mid;
    }
    return mn;
}
