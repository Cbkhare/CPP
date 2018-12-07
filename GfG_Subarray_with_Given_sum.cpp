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
#include <numeric>   //for acccumulate
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

struct Index{
  int i;
  int j;
};

Index range(vector<int>& v, int sum)
{
  int l = v.size();
  int i=0,j=0,vsum=0;
  while (j<l){
    cout<<vsum<<' '<<i<<' '<<j<<endl;
    if(vsum + v[j]<=sum){
      vsum+=v[j];
      j+=1;
    }
    else if(vsum+v[j]>sum){
      vsum-=v[i];
      i+=1;
    }
    if (vsum==sum){
      return {i,j-1};
    }

  }
  return {-1,-1};
}


Index range_negative(vector<int>& v, int sum)
{
  int l = v.size();
  int i=0,j=1,vsum=v[0];
  while (j<l){
    cout<<vsum<<' '<<i<<' '<<j<<endl;
    if (i==j){
      vsum=v[i];
      j+=1;
    }
    if(vsum + v[j]<=sum or v[j]<0){
      vsum+=v[j];
      j+=1;
    }
    else if(vsum+v[j]>sum){
      vsum-=v[i];
      i+=1;
    }
    if (vsum==sum){
      return {i,j-1};
    }

  }
  return {-1,-1};
}

int main()
{
    int n;
    cin >>n;
    for (int i=0; i<n; i++)
    {
    int m,sum;
    cin>>m;
    cin >>sum;
    std::vector<int> v;
    rep(j,m)
    {
      int x;
      cin>>x;
      v.push_back(x);
    }
    Index result;
    result=range_negative(v,sum);
    cout<<result.i<<' '<<result.j<<endl;
  }
    return 0;
}


//https://practice.geeksforgeeks.org/problems/subarray-with-given-sum/0
//https://practice.geeksforgeeks.org/problems/subarray-range-with-given-sum/0
