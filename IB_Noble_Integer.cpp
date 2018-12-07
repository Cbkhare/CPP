
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
  int solve(vector<int> &A);
};

int Solution::solve(vector<int> &A) {
  sort(A.begin(),A.end());
  int i=0,l=A.size();
  print_vector(A);
  cout<<l<<endl;
  while (i<l){
    int j=i+1;
    while (j<l and A[j]==A[i]){
      j++;i++;
    }
    if (l-i-1==A[i]){
      return 1;
    }
    i++;
  }
  return -1;
}


int main()
{
    int n,m;
    cin>>n;
    for (int i=0; i<n;i++){
        cin>>m;
        std::vector<int> v;
        for (;m>0;m--){
          int x;
          cin>>x;
          v.push_back(x);
        }
        Solution S;
        //vector<int> ans;
        //std::vector<string> ans;
        int ans;
        ans = S.solve(v);
        cout<<ans<<endl;
        //print_vector(ans);
    }
    return 0;
}
