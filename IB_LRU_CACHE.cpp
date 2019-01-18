#include <list>

int cap, c;
list<int> st;
unordered_map<int,int> umap;

LRUCache::LRUCache(int capacity) {
    cap=capacity;
    c=0;
    st.clear();
    umap.clear();

}

int LRUCache::get(int key) {
    //cout<<' '<<endl;
    //for (auto i:st) cout<<i<<' ';
    if (find(st.begin(),st.end(),key)!= st.end()){ //or use count function
         st.remove(key);
         st.push_back(key); //updated last position
        return umap[key];
    }
    else return -1;
}

void LRUCache::set(int key, int value) {
    //cout<<' '<<endl;
    //for (auto i:st) cout<<i<<' ';
    if (get(key)!= -1){
        umap[key] = value;
    }

    else{
        if (c>=cap){
            st.pop_front();c-=1;}

        st.push_back(key);
        umap[key] = value;
        c+=1;
    }
}
