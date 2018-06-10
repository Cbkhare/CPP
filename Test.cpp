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


void test_vector(vector<int>& v)
{
  std::vector<int>::iterator it;
  for (it=v.begin();it!=v.end();it++)
  { *it+=1; }
}

/*
Pair of in CPP

template<typename T1, typename T2> struct pair {
      T1 first;
      T2 second;
 };

pair<string, pair<int,int> > P;
string s = P.first; // extract string
int x = P.second.first; // extract first int
int y = P.second.second; // extract second int

The great advantage of pairs is that they have built-in operations to compare
themselves. Pairs are compared first-to-second element. If the first elements
are not equal, the result will be based on the comparison of the first elements
only; the second elements will be compared only if the first ones are equal.
The array (or vector) of pairs can easily be sorted by STL internal functions.
*/

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
    test_vector(v);
    print_vector(v);
  }
    return 0;
}
