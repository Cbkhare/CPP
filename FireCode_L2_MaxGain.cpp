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
#define repb(i,sz) for(int i=sz-1; i>=0;i--)
#define max(x,y)  (x>y)?x:y
#define min(x,y)  (x<y)?x:y
#define len(arr)  sizeof(arr)/sizeof(*arr)
typedef std::map<int, int> mii;
typedef std::string::iterator sit;
typedef std::map<int, int>::iterator miit;


FAILED

Maintain max diff and min value in array

try again


int max_gain(int arr[], int sz)
{}
    if (sz==0 or sz==1) return 0;
    int max_so_far= arr[1], min_so_far = arr[0]
    int min_i =0, max_i=1 ;
    rep(i, sz)
    {
      max_so_far = max(max_so_far, arr[i]);
      if min_so_far = min(min_so_far,arr[i]);
    }
    return max(0, max_so_far - min_so_far)
}

int main()
{
    int x;
    cin>>x;
    for (int i =0; i<x ; i++)
    {
      int arr[]={1,5,2,1};
      cout << max_gain(arr, size_of(arr)/size_of(arr[0]))
    }

}
