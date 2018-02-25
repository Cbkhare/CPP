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

bool is_isomorphic(string input1, string input2)
{
  map<char, vector> cm1;
  map<char, vector> cm2;
  if input1.size()

}

int main()
{
    int n;
    cin >>n;
    for (int i=0; i<n; i++)
    {
    string str, str1;
    cin>>str;
    cin >>str1;
    cout<<is_isomorphic(str, str1)<<endl;}
    return 0;
}
