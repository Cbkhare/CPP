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
  std::vector<int> allFactors(int number);
};

vector<int> Solution::allFactors(int A) {
    vector<int> result;
    vector<int> re_result;
    long x=sqrt(A);
    for (int i=1; i<=x;i++){
        if (A%i==0){
            result.push_back(i);

        if (A/i !=i and A/i !=1)
            re_result.push_back(A/i);
        }
    }
    reverse(re_result.begin(), re_result.end());
    result.insert(result.end(), re_result.begin(), re_result.end());
    return result;
}

int main()
{
    int n,m;
    cin>>n;
    for (int i=0; i<n;i++){
        cin>>m;
        Solution S;
        std::vector<int> ans;
        ans = S.allFactors(m);
        print_vector(ans);
        cout<<"\n"<<endl;
    }
    return 0;
}
