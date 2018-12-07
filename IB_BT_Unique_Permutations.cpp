map<vector<int>, bool> vs;
void swap(int &a,int &b){
    int c=a;
    a=b;
    b=c;
}
void permutations(vector<int> &A,vector< vector<int> > &v,int l){
  if(l==A.size()-1 && !vs[A]){
    v.push_back(A);
    vs[A]=true;
    return;
  }
  for(int i=l;i<A.size();i++){
    swap(A[l],A[i]);
    permutations(A,v,l+1);
    swap(A[l],A[i]);
  }
}
vector<vector<int> > Solution::permute(vector<int> &A) {
    vs.clear();
    vector<vector<int> > v;
    permutations(A,v,0);
    sort(v.begin(),v.end());
    return v;
}
