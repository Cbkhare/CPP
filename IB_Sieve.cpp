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
  std::vector<int> sieve(int number);
};


  vector<int> Solution::sieve(int A) {
    vector<int> nums(A,1);
    vector<int> v;
    for(int i=2; i<=A;i++){
    if(nums[i] == 1){
        v.push_back(i);
        for(int j=i;j<=A;j=j+i){
            nums[j]=0;
            }
        }
    }
    return v;
  }

  vector<int> Solution::sieve_large(int A) {
    unordered_set<int> primes;
    unordered_set<int> non_primes;

    for(int i=0; i<=A;i++){
        if(non_primes.find(i) == non_primes.end()){
            primes.insert(i);
            for(int j=i;j<=A;j+i){
                non_primes.insert(j);
            }
        }
    }
    vector<int> v(primes.begin(),primes.end());
    //std::copy(primes.begin(),primes.end(),std::inserter(v,v.end()));
    return v;
}


int main()
{
    int n,m;
    cin>>n;
    for (int i=0; i<n;i++){
        /*cin>>m;
        Solution S;

        */cin>>m;
        Solution S;vector<int> ans;
        ans = S.sieve(m);
        print_vector(ans);
    }
    return 0;
}


{
"name": "network",
"hosts": "localhost",
"gather_facts": "yes",
"vars": {
"ifname": "pub0",
"type": "bond",
"ip4": "10.182.174.10",
"subnet4": "255.255.248.0",
"gw4": "10.182.168.1",
"dns4": ["10.182.128.34",”10.182.128.134”]
},
"roles": [
"network_setup"
]
}
