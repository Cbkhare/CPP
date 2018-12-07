
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
  int removeElement(vector<int> &A, int B);
};

int Solution::removeElement(vector<int> &A, int B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int i=0,j=0,l=A.size(),count=0;

    while (i<l){
      if (A[i]!=B){
        swap(A[i],A[j]);
        j+=1;
      }
      else if (A[i]==B){
        count+=1;
      }
      i+=1;
  }
  //cout<<i<<" "<<t<<" "<<l<<endl;
  return l-count;
}

/*
int Solution::removeElement1(vector<int> &A, int B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int i=0,t,l=A.size(),count=0;
    i=t =l-1;
    while (i>=0 and t>=0){
      if (A[i]==B){
        //swap
        swap(A[i],A[t]);
        t-=1;
        count+=1;
      }
      i-=1;

  }
  //cout<<i<<" "<<t<<" "<<l<<endl;
  return l-count;
}*/


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
      int x;
      cin >>x;
      Solution S;
      //vector<int> ans;
      int ans;
      ans = S.removeElement(v,x);
      cout<<ans<<endl;
      print_vector(v);
      //cout<<ans<<endl;
    }
    return 0;
}
