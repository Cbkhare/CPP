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

int max_gain(vector<int>& v, int sz)
{
    std::vector<int>::iterator it;
    std::vector<int>::iterator rit;
    if (sz==0){ return 0;}
    int mn=v[0],diff = 0;
    for (it = v.begin()+1;it<v.end();it++)
    {
      if (mn > *it){
        mn = *it;

      }
      else{
      //cout <<*std::prev(it)<<' '<<*it<<endl;
      diff = max(diff,*it-mn);
      }
    }
    /*
    for (rit = v.end()-1;rit>v.begin();rit--)
    {
        int i;
        i = rit-v.begin()-1;
        //cout<<i<<' '<<*rit<<endl;
        if (*rit <=mn and i<in)
        {
        mn = *rit;
        in = i;
        }
    }*/
    //cout<<mx<<' '<<mn<<' '<<ix<<' '<<in<<endl;
    return diff;
    //return max(mx-mn * (ix-in)/abs(ix-in),0);
}


int main()
{
    int n,m;
    cin >>n;
    for (int i=0; i<n; i++)
    {
    cin>>m;
    std::vector<int> v;
    rep(j,m)
    {
      int x;
      cin>>x;
      v.push_back(x);
    }
    cout<<max_gain(v,m)<<endl;
  }
    return 0;
}
