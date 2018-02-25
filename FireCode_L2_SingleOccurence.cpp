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
int imin = std::numeric_limits<int>::min(); // minimum value
int imax = std::numeric_limits<int>::max();

int single_number(int arr[], int sz)
{
    mii m;
    miit mit;
    rep(i,sz)
    {
      m[arr[i]]++;
    }
    for (mit = m.begin();mit!=m.end();mit++)
    {
      if (mit->second==1)
      {
        return mit->first;
      }
    }
    return 0;

}


int main()
{
    int x;
    cin>>x;
    for (int i =0; i<x ; i++)
    {
      int arr[]={1,1,3,3,5};
      cout << single_number(arr, len(arr))<<endl;
    }

}


/*
Write a method that returns a number that appears only once in an array.
Assume the array will surely have a unique value. If the array is empty return 0.
Examples:

{1,2,3,4,1,2,4,3,5} ==> 5
*/
