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
#define min(x,y)  (x>y)?x:y
#define len(arr)  sizeof(arr)/sizeof(*arr)
typedef std::map<int, int> mii;
typedef std::string::iterator sit;
typedef std::map<int, int>::iterator miit;

int main()
{
  int x;
  cin>>x;
  //unordered_map<string, int>  m;
  map<string, int>  m;
  rep(i,x){
    string s;
    cin>>s;
    if (m.count(s))
    {
      string ss;
      ss= s + to_string(m[s]);
      m[ss]++;
      m[s]++;
      cout<<ss<<endl;
    }
    else
    {
      m[s]++;
      cout<<"OK"<<endl;
    }
  }
  return 0;
}
