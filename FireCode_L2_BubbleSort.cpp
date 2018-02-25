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
#define printv(V)  std::copy(V.begin(), V.end(), \
                             std::ostream_iterator<int>(cout, ", "));
#define printa(A,size)  std::copy(A, size, \
                                  std::ostream_iterator<int>(cout, ", "));

typedef std::map<int, int> mii;
typedef std::string::iterator sit;
typedef std::map<int, int>::iterator miit;
//int imin = std::numeric_limits<int>::mini(); // minimum value
//int imax = std::numeric_limits<int>::maxi();

int* bubble_sort_array(int A[], int size)
{
    // Add your code above this line. Do not modify any other code.
    /* save the sorted array in int arr[] and return the same array */
    int i=1;
    for (;i<size;i++)
    {
      for (int x=0; x<size-i; x++)
      {
        if (A[x]>A[x+1])
        {
          swap (A[x],A[x+1]);
        }
      }
    }
    return A;
}

int main()
{
  int x;
  cin>>x;
  for (int i=0; i<x;i++)
  {
    int y;
    cin>>y;
    //int* arr = new int[y];
    int arr[y];
    for (int j =0;j<y;j++)
    {
      cin>> arr[j];
    }
    int ans;
    bubble_sort_array(arr, y);
    for(int j=0;j<y;j++) cout << arr[j] << " ";
    //print (bubble_sort_array(arr, y));
  }
  return 0;
}
