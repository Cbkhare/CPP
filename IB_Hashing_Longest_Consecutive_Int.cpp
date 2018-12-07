#define max(x,y) (x>y)?x:y
int Solution::longestConsecutive(const vector<int> &A) {
    unordered_map<int, int> umap;
    priority_queue <int> pq;
    //Priority Queue insertion time O(n)
    for(int i=0;i<A.size();i++){
        pq.push(A[i]);
    }
    int max = 1;
    //Lookup time is O(lgn)
    for (int i=0; i<A.size();i++){
        int v =pq.top();
        if (umap[v+1]){
            umap[v]=umap[v+1]+1;
        }
        else{
            umap[v] = 1;
        }
        pq.pop();
    }
    for(auto i:umap){
        max = max(max,i.second); //i->second
    }
    return max;
}
