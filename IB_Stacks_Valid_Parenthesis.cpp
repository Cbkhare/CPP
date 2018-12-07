
#include <stdio.h>
#include <algorithm>
#include <assert.h>
#include <bitset>
#include <cmath>
#include <complex>
#include <deque>
#include <functional>
#include <iostream>
#include <limits.h>
#include <map>
#include <math.h>
#include <queue>
#include <stack>
#include <set>
#include <stdlib.h>
#include <string.h>
#include <string>
#include <time.h>
#include <unordered_map>
#include <unordered_set>
#include <vector>

using namespace std;
typedef pair <int, int> pii;

#define reps(i,v) for(int i=0; v[i]; i++)
#define rep(i, n) for(int i=0;i<n;i++)
#define max(x,y)  (x>y)?x:y
#define min(x,y)  (x<y)?x:y
#define len(arr)  sizeof(arr)/sizeof(*arr)
#define print_vector(v) for (const auto i: v)  std::cout << i << ' ';
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int,int> ii;
#define sz(a) int((a).size())
#define pb push_back
#define all(c) (c).begin(),(c).end()
#define tr(c,i) for(typeof((c).begin() i = (c).begin(); i != (c).end(); i++)
#define present(c,x) ((c).find(x) != (c).end())
#define cpresent(c,x) (find(all(c),x) != (c).end())


typedef std::map<int, int> mii;
typedef std::string::iterator sit;
typedef std::map<int, int>::iterator miit;


//****************************-Solution-****************************************
class Solution{
public:
  int isValid(string st);
};

int Solution::isValid(string A) {
    //if (A.size()==0) return 0;
    stack<char> st;
    unordered_map<char, char> m; //becoz unordered_map is fast
    m[')'] = '(';
    m['}'] = '{';
    m[']'] = '[';
    int l = A.size();
    for(int i=0;i<l;i++){
        //print_vector(st);
        //cout<<st.top()<<' '<<A[i]<<endl;
        if (A[i] == '{' || A[i] == '(' || A[i] == '['){
            st.push(A[i]);
        }
        else{
            if (st.size() > 0 and st.top() == m.at(A[i])){
                st.pop();
            }
            else return 0;
        }
    }
    if (st.size()>0) {
      return 0;}
    else {
      return 1;}
}


int main()
{
    int n;
    cin>>n;
    for (int i=0; i<n;i++){
        //cin>>m;
        string st;
        cin>>st;
        Solution S;
        //vector<int> ans;
        int ans;
        ans = S.isValid(st);
        cout<<ans<<endl;
    }
    return 0;
}
