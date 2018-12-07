
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
  std::vector<string> fizzBuzz(int number);
};

vector<string> Solution::fizzBuzz(int A) {
    vector<string> v;
    for (int i=1; i<=A;i++){
      if (i%3==0 and i%5==0){
        v.push_back("FizzBuzz");
      }
      else if(i%5==0){
        v.push_back("Buzz");
      }
      else if(i%3==0){
        v.push_back("Fizz");
      }
      else{
        v.push_back(to_string(i));
      }
    }
    return v;
}


int main()
{
    int n,m;
    cin>>n;
    for (int i=0; i<n;i++){
        cin>>m;
        Solution S;
        //vector<int> ans;
        std::vector<string> ans;
        ans = S.fizzBuzz(m);
        //cout<<ans<<endl;
        print_vector(ans);
    }
    return 0;
}
