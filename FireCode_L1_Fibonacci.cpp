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

map<int, int> m = {{0,0}, {1,1}};

int fib(int n)
{
  if (m.count(n)==0)
  {
    m[n]=fib(n-1) + fib(n-2);
  }
  return m[n];

}

int main()
{
    int x;
    //vector<int>arr(n);
    //for(int i=0;i<n;i++) cin >> arr[i];
    //int x = single_number(arr, n);
    cin >> x;
    for (int i=0; i<x; ++i){
    int n;
    cin >> n;
    cout << fib(n) << endl;
    }
    return 0;
}
