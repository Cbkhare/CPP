int Solution::majorityElement(const vector<int> &A) {
    unordered_map<int, int> umap;
    for (int i=0;i<A.size();i++){
        umap[A[i]]++;
    }
    int l=A.size();
    for (auto i : umap){
        if(i.second>floor(l/2)) return i.first;
    }
}
