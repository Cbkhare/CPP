vector<int> Solution::dNums(vector<int> &A, int B) {
    unordered_map<int,int> umap;
    vector<int> v;
    int dis =0;
    for(int i=0;i<A.size();i++){
        if (umap.find(A[i])!=umap.end() and umap[A[i]]>0){
            umap[A[i]]+=1;
        }
        else{
            umap[A[i]]=1;
            dis +=1;
        }
        if (i==B-1){
            v.push_back(dis);
        }
        if(i>=B){
            int popped = A[i-B];
            umap[popped]-=1;
            if (umap[popped]==0){
                dis-=1;
            }
            //else nothing to do
            v.push_back(dis);
        }
    }
    return v;
}
